#include <stdio.h>
#include <stdlib.h>

#include "insert.h"

int new_node(node_t* old_head, int new_value);

int main()
{
    node_t *head = malloc(sizeof(node_t)); //This creates the first node (allocates a memory location).
    head->value = 1; //This sets the actual value of head to 1.
    head->next = NULL; //This sets that this node points to nothing (it's the only element so far).

    int new_number = 2;

    printf("%d", new_node(head, new_number));

    return 0;
}

int new_node(node_t* old_head, int new_value) //node_t is the struct which we use in the function.
{
    node_t *node1 = malloc(sizeof(node_t)); //This allocates an address to a new node.
    node1->value = new_value; //This sets the new node's value to the given number.
    old_head->next = node1; //This sets the previous node's 'next' to point to the new node's address.
    node1->next = NULL; //As the new node is the last, itt will point to nothing.

    //This should be done with a 'while' loop, as in the future, we will only know the memory address of 'head'.

    return new_value;
}