#ifndef LIST_NODE_H
#define LIST_NODE_H

struct List_Node{
    void *data;
    struct List_Node *next_node;
};

struct List_Node * create_node(void *data, size_t s);

void *get_data(struct List_Node *n);

void destroy_node(struct List_Node *n);

#endif