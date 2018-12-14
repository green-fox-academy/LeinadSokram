#ifndef INC_01INSERTATTHEEND_INSERT_H
#define INC_01INSERTATTHEEND_INSERT_H

typedef struct node //This is a struct
{
    int value; //value of the node
    struct node *next; //pointer to the next node's memory address
} node_t;

int new_node(node_t **old_head, int new_value); //This is a function declaration to put a new node to the end of the list.

#endif //INC_01INSERTATTHEEND_INSERT_H