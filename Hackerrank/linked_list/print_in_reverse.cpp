void ReversePrint(Node *head)
{
  if(head!=NULL){
  while(head->next!=NULL)
  {
    Node *ptr = head;
    while(ptr->next->next!=NULL)
      ptr = ptr->next;
    cout<<ptr->next->data<<endl;
    ptr->next = NULL;
    if(head->next ==NULL)
      cout<<head->data<<endl;
    else
      ReversePrint(head);
  }
}
}