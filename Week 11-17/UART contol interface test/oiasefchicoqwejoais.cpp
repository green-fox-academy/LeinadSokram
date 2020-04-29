if (huart->Instance == USART3) {

buffer[counter] = tmp[0];
counter++;

if (tmp[0] == '\n') {

buffer[counter - 1] = '\0';
counter = 0;

if (!strcmp((char *) buffer, "on")) {
HAL_GPIO_WritePin(GPIOB, LD1_Pin
| LD2_Pin | LD3_Pin,
GPIO_PIN_SET);
printf("I turned on all 3 LEDs\r\n");
} else if (!strcmp((char *) buffer, "off")) {
HAL_GPIO_WritePin(GPIOB, LD1_Pin
| LD2_Pin | LD3_Pin,
GPIO_PIN_RESET);
printf("I turned off all 3 LEDs\r\n");
}
stage = TOKENIZING;
}
HAL_UART_Receive_IT(&huart3, tmp,
1);

if (stage == TOKENIZING) {
int i = 0;
char *pch = strtok((char *) buffer, " ");
while (pch != NULL) {
switch (counter) {
case 0:
strcpy(direction, pch
);
printf("%s\r\n", direction);
break;
case 1:
strcpy(percentage_CH, pch
);
printf("%s\r\n", percentage_CH);
break;
default:
printf("Something went wrong\r\n");
}
pch = strtok(NULL, " ");
counter++;
}
i++;
counter = 0;
if (!
strcmp(direction,
"left") | !
strcmp(direction,
"right")) {
stage = ROTATING;
} else if (!
strcmp(direction,
"forward")
| !
strcmp(direction,
"backward")) {
stage = MOVING;
} else {
printf("Unknown command\r\n");
}
percentage = strtol(percentage_CH, NULL, 10);
}
if (stage == ROTATING) {
if (percentage > 100) {
percentage = 100;
} else if (percentage <= 0) {
percentage = 1;
}
if (!
strcmp(direction,
"left")) {
htim1.Instance->
CCR1 = 935 - (percentage / 10);
} else if (!
strcmp(direction,
"right")) {
htim1.Instance->
CCR1 = 935 + (percentage / 10);
}
stage = SCANNING;
}
if (stage == MOVING) {
if (percentage > 100) {
percentage = 100;
} else if (percentage <= 0) {
brake();
}
if (percentage > 0 && percentage <= 100) {
if (!
strcmp(direction,
"forward")) {
motor_dir = FWD;
drive(percentage);
} else if (!
strcmp(direction,
"backward")) {
motor_dir = REV;
drive(percentage);
}
}
stage = SCANNING;
}
}



oid drive(int speed)
{
    if (speed > 100) {
        speed = 100;
    }
    if (speed > 0) {
        //nSleep
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET);
        //Disable -> inverse logic
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);
        //forward 77 - 100% moves -> 0.23
        //backward 0 - 24% moves -> 0.24
        float speed_pwm;
        if (motor_dir == FWD) {
            HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_RESET);
            speed_pwm = htim2.Init.Period * (0.77 + (float) speed * 0.23 / 100);
            __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, speed_pwm);
        } else if (motor_dir == REV) {
            HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
            speed_pwm = htim2.Init.Period * (0.24 - (float) speed * 0.24 / 100);
            __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, speed_pwm);
        }
    } else if (speed <= 0) {
        brake();
    }
}

void brake()
{
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET);
}


if (!strcmp((char *) buffer, "bt-on")) {
HAL_GPIO_WritePin(GPIOB, LD1_Pin, GPIO_PIN_SET);
printf("I turned the LED on via bluetooth!\r\n");
} else if (!strcmp((char *) buffer, "bt-off")) {
HAL_GPIO_WritePin(GPIOB, LD1_Pin, GPIO_PIN_RESET);
printf("I turned the LED off via bluetooth!\r\n");
}
}
//HAL_UART_Receive_IT(&huart6, tmp, 1);