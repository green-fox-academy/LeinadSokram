#include <stdio.h>
#include <malloc.h>
#include "cmake-build-debug/queue.h"

int main()
{
    command_node_t *head; //create head
    head = NULL;

    //Is this okay??

    //head->command = "the head"; //value of head
    //head->next = NULL; //the head points to null

    command_node_t *tail; //create tail
    tail = head;

    //tail->command = "the tail";
    //tail->head; //pointer to the last element

    char *command1 = "a node"; //new command to push into node
    char* command2 = "another node";
    char* command3 = "spicing up";

    push(&head, &tail, command1); //call push function
    push(&head, &tail, command2);
    push(&head, &tail, command3);

    command_node_t *p = head; //temp pointer to look at nodes

    while (p != NULL) {
        printf("%s, ", p->command);
        p = p->next;
        printf("%d, ", get_size(head));
        pop(&head, &tail);
    } //prints out all values, then removes them

    return 0;
}