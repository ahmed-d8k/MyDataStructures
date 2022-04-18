#include <stdio.h>
#include <stdbool.h>

#include "list_node.h"
#include "linkedlist.h"

int main(){
    struct List l = create_list();
    struct List_Node * n = NULL;
    int ind = 0;

    list_push_int(&l, 0);
    list_push_int(&l, 1);
    list_push_int(&l, 2);
    list_push_string(&l, "Hello World");
    list_push_char(&l, 'a');
    list_push_bool(&l, true);

    list_print(&l);
    printf("\nInput index: ");
    scanf("%d", &ind);

    n = list_get_ind(&l, ind);

    ln_print_node(n);

    list_rem_ind(&l, ind);

    ln_print_node(n);


}