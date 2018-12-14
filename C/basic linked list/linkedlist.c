#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

typedef struct node Node;

void addItem(Node **_head, int _data) // head parameter is call by reference
{
  Node *newnode = (Node *)malloc(sizeof(Node) * 1);
  if (newnode == NULL)
  {
    printf("Bellek al�namad�!\n");
    return;
  }
  newnode->data = _data;
  newnode->next = *_head;
  *_head = newnode;
}

int deleteItem(Node **_head, int _data)
{
  Node *cur, *prev;

  if (*_head == NULL)
  {
    printf("liste bo�\n");
    return 0;
  }
  for (cur = *_head, prev = NULL; cur != NULL &&
                                  cur->data != _data;
       cur = cur->next)
    prev = cur;
  if (cur == NULL)
  {
    printf("listede bulunamad�\n");
    return -1;
  }
  if (cur == *_head) // ilk eleman
    *_head = cur->next;
  else if (cur->next == NULL) // son eleman
    prev->next = NULL;
  else
    prev->next = cur->next; // ara eleman

  free(cur);
  return 1;
}

void listeYaz(const Node *_head)
{
  Node *cur;
  for (cur = (Node *)_head; cur != NULL; cur = cur->next) // head const pointer so that
                                                          // remove constants when copy to
                                                          // current
    printf("%d\n", cur->data);
}

int main(int argc, char *argv[])
{
  Node *head = NULL, *cur; // liste ilk anda bo�
  int parsay = argc - 1;
  //argv[0] program�n ismi

  //1- how to use command line to pass data as arguments
  //  for(;parsay>0;--parsay)
  //     addItem(&head,atoi(argv[parsay]));

  addItem(&head, 5); //call by reference to return back changed head value
  addItem(&head, 15);
  addItem(&head, 35);
  addItem(&head, 25);
  addItem(&head, 55);

  listeYaz(head);

  deleteItem(&head, 25);
  deleteItem(&head, 15);

  listeYaz(head);

  system("PAUSE");
  return 0;
}
