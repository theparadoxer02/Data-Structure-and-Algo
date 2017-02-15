Node* Insert(Node *head,int data)
{
  // Complete this method
  Node *temp = new Node{data};
  temp ->next = head;
  head = temp;
  return head;
}
