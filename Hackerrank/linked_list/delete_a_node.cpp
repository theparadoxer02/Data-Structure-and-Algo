Node* InsertNth(Node *head, int data, int position)
{
  Node *newnode = new Node{data};
  if(position == 0)
  {
    if(head == NULL)
      newnode->next = NULL;
    else
      newnode->next = head;
    head = newnode;
  }
  else{
    Node *ptr = head;
    for(int i=1;i<position;i++)
      ptr = ptr->next;
    newnode->next = ptr->next;
    ptr->next = newnode;
      
  }
  // Complete this method only
  // Do not write main function. 
  return head;
}
