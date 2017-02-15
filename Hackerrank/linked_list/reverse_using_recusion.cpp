Node* Reverse(Node *head)
{
  // Complete this method
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
  return head;
}