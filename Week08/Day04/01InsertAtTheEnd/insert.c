#include <stdlib.h>
#include <stdio.h>
#include "insert.h"

int new_node(node_t **old_head, int new_value) //node_t is the struct which we use in the functio
                                               // (note the double stars!)
{
    node_t *node = malloc(sizeof(node_t)); //This allocates an address to a new node.
    node->value = new_value; //This sets the new node's value to the given number.
    node->next = NULL; //As the new node is the last, it will point to nothing.

    if (*old_head == NULL) { //If the list has no nodes...
        *old_head = node; //...this will create the head.
    } else {
        node_t *p = *old_head; // We make a temporary pointer, which points to the head.
        while (p->next != NULL) { //If the node it points to is not the last...
            p = p->next; //...then it will point to the next node.
        }
        p->next = node; //If it reaches the last element, the temp pointer becomes the penultimate element's pointer
                        // to the new element
    }

    return new_value;
}