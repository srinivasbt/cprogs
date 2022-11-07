#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node * link;
}node;

node * head = NULL;

node * add_node(int data) {
    
    node * new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->link = head;
    
    head = new_node;
    return head;
}

void print_list (node * list) {
    while (list != NULL) {
        printf ("%d->", list->data);
        list = list->link;
    }
    printf ("NULL\n");
}

void del_node (node * list, int pos) {
    int req_pos = 1;
    node * del_node;
    
    if (head == NULL) {
        printf ("Empty list\n");
    }
    
    if (pos == 1  && head->link == NULL) {
        free (head);
        printf ("Single node list - deleted\n");
    }

    if (pos == 1) {
        del_node = head;
        head = head->link;
        free (del_node);
    }

    while ((list != NULL) && (++req_pos < pos)) {
        list = list->link;
        printf ("%d\t", req_pos);
    }
    printf ("\n");
    if (!list || list->link == NULL) return;
    del_node = list->link;
    list->link = list->link->link;
    free (del_node);
}

1->NULL
1->2->NULL
1->2->3->NULL

void rec_rev_list (node * list) {
    
    if (list->next == NULL) {
        rhead = list;
    }
    
    rec_rev_list(list->next);
}

int main () {
    
    add_node(60);
    add_node(50);
    add_node(40);

    add_node(30);
    add_node(20);
    add_node(10);
    
    print_list (head);
    del_node (head, 8);
    print_list (head);
    
    return 0;
}
