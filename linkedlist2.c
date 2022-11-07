#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node * head = NULL;

node * add_node(int data) {
    node * new_node;
    
    new_node = (node *) malloc (sizeof (node));
    new_node->data = data;
    new_node->next = head;
    
    head = new_node;
    
    return head;
}

int main () {

    add_node (10);
    add_node (20);
    add_node (30);
    
    while (head != NULL) {
        printf ("%d\t", head->data);
        head = head->next;
    }
    printf ("\n");

    return 0;
}

