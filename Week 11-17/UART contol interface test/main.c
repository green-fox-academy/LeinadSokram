#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum command {
    STANDBY, LEFT, RIGHT, FORWARD, REVERSE
} command_t;

command_t command = STANDBY;

void command_parsing(char *command);
void servo_command_parsing(char *params);
void servo_control (char* direction, int percent);

void motor_command_parsing(char *params);
void motor_control(char* direction, int percent);

void rgb_command_parsing(char *params);
void us_command_parsing(char *params);
void print_command_parsing(char *params);

int main()
{
    printf("Enter command:\n");
    char input[20];
    scanf("%s/n", input);
    command_parsing(input);

    return 0;
}

void command_parsing(char *command)
{
    char *peripheral = strtok(command, "_");
    printf("%s\n", peripheral);

    char *params = strtok(NULL, "\n");
    printf("%s\n", params);

    if (peripheral == NULL) {
        printf("Error - Invalid command!\n");
        return;
    }

    if (!strcmp(peripheral, "servo")) {
        printf("adjusting servo\n");
        servo_command_parsing(params);
    } else if (!strcmp(peripheral, "motor")) {
        printf("adjusting motor\n");
        motor_command_parsing(params);
    } else if (!strcmp(peripheral, "rgb")) {
        printf("adjusting rgb\n");
        rgb_command_parsing(params);
    } else if (!strcmp(peripheral, "us")) {
        printf("adjusting us\n");
        us_command_parsing(params);
    } else if (!strcmp(peripheral, "print")) {
        printf("adjusting print\n");
        print_command_parsing(params);
    } else {
        printf("Error - Invalid peripheral!");
        return;
    }

}

void servo_command_parsing(char *params)
{
    char *direction = strtok(params, "_");
    printf("%s\n", direction);

    if (!strcmp(direction, "left")) {
        command = LEFT;
    } else if (!strcmp(direction, "right")) {
        command = RIGHT;
    } else {
        printf("Error - invalid servo commands!");
        return;
    }

    char *value = strtok(NULL, "\n");
    char *endptr = NULL;
    int percent;
    percent = strtol(value, &endptr, 10);
    printf("%d\n", percent);

    if (value == endptr) {
        printf("invalid number\n");
        return;
    }

    servo_control(direction, percent);
}

void servo_control (char* direction, int percent)
{
    if (command == LEFT) {
        printf("Wheel turned %s by %d percent!\n", direction, percent);
    } else if (command == RIGHT) {
        printf("Wheel turned %s by %d percent!\n", direction, percent);
    } else {
        printf("Error - invalid servo commands!");
        return;
    }
}

void motor_command_parsing(char *params)
{
    char *direction = strtok(params, "_");
    printf("%s\n", direction);

    char *value = strtok(NULL, "");
    int percent;
    percent = strtol(value, NULL, 10);
    printf("%d\n", percent);
    if (percent == 0) {
        printf("Error - the value is not a number!");
        return;
    }

    motor_control(direction, percent);
}

void motor_control(char* direction, int percent)
{
    if (!strcmp(direction, "fwd")) {
        printf("Motor going forward with %d percent!\n", percent);
    } else if (!strcmp(direction, "rev")) {
        printf("Motor going reverse with %d percent!\n", percent);
    } else {
        printf("Error - invalid motor commands!");
        return;
    }
}

void rgb_command_parsing(char *params)
{

}

void us_command_parsing(char *params)
{

}

void print_command_parsing(char *params)
{

}