#include <stdio.h>


struct node {
  int value;
  struct node *next;
};

typedef struct node node_t;

void print_linkedlist(node_t *head) {
  node_t *temp = head;

  while (temp != NULL) {
    printf("%d\n",temp->value);
    temp = temp->next;
  }
  printf("\n");
}

int main(int argc, char *argv[])
{
  node_t n1, n2, n3;
  node_t *head;

  n3.value = 12;
  n2.value = 11;
  n1.value = 10;

  head = &n3;
  n3.next = &n2;
  n2.next = &n1;
  n1.next = NULL;

  print_linkedlist(head);

  return 0;
}
