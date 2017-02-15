/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int pos)
{
  struct Node *current,*prev,*next;
  current = head;
  while(current != NULL)
    {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
  for(int i=0;i<pos;i++)
    {
    head = head->next;
  }
  return head->data;
}
