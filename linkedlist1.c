#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node * createNode (int inp) {
    node * tmp_node;
    tmp_node = malloc (sizeof(node));
    if (tmp_node == NULL) return NULL;
    
    tmp_node->data = inp;
    tmp_node->next = NULL;
    
    return tmp_node;
}

static node *
del_from_last (node * head, int pos)
{
    node *first_ptr = head;
    node *second_ptr = head;
    node *tmp_node = head;
    node *prev2_second_ptr = head;
    int iter = 0;
    
    while (first_ptr && iter < pos) {
        iter++;
        first_ptr = first_ptr->next;
    }
    if (first_ptr == NULL) {
        printf ("position : %d beyond list\n", pos);
        return NULL;
    }
    while (first_ptr) {
        first_ptr = first_ptr->next;
        prev2_second_ptr = second_ptr;
        second_ptr = second_ptr->next;
    }
    
    printf ("del node = %x prev2_second = %x\n",
        second_ptr->data, prev2_second_ptr->data);
    
    /* Del node */
    prev2_second_ptr->next = second_ptr->next;
    
  return second_ptr;
}

node *
createList (node * head, int inp)
{
  node *tmp_node = head;
  node *new_node = NULL;

  if (tmp_node == NULL)
    {
      return createNode (inp);
    }

  for (; tmp_node->next; tmp_node = tmp_node->next)
    {
    }
  new_node = createNode (inp);
  tmp_node->next = new_node;

  return head;
}

static void
printList (node * list)
{
  for (; list; list = list->next)
    {
      printf ("%d->", list->data);
    }
  printf ("NULL\n");
}

int
main ()
{
  int i = 0;
  int inp_array[10] = { 2, 3, 5, 6, 7, 8, 1, 9, 0, 4 };
  node *head = NULL;

  //head = createList(head, inp_array[0]);
  for (i = 0; i < 10; i++)
    {
      head = createList (head, inp_array[i]);
    }

  printList (head);
  del_from_last(head, 3);
  printList (head);
  
}
