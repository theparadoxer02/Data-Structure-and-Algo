void Print(Node *head)
{
  Node * ptr = head;
  while(ptr!= NULL)
  {
    cout<<ptr->data<<endl;
    ptr = ptr->next;
  }

}