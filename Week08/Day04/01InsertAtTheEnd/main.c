#include <stdio.h>
#include <stdlib.h>

#include "insert.h"

int main()
{
    node_t *head = malloc(sizeof(node_t)); //This creates the first node (allocates a memory location).
    head->value = 1; //This sets the actual value of head to 1.
    head->next = NULL; //This sets that this node points to nothing (it's the only element so far).

    int new_number = 2;

    new_node(&head, new_number); //We call the function here. Note the '&' symbol!

    node_t *p = head; //To look at the nodes, first we make a temp pointer.

    while (p != NULL){ //If the pointer is not null... (if it reaches the last element, it becopmes null)
        printf("%d,", p->value); //...it will print the value of the node...
        p = p->next; //...then advances to the next one, and repeats.
    }

    return 0;
}