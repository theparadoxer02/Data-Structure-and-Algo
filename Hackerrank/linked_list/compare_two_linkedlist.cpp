int CompareLists(Node *headA, Node* headB)
{
  int count=0,count2=0;
  int flag =0;
  struct Node *temp1 = headA,*temp2 = headB;
  while(temp1 != NULL)
  {
    temp1 = temp1->next;
     count++;
  }

  while(temp2->NULL)
  {
    temp2 = temp2-next;
    count2++;
  }

  temp1 = headA;
  temp2 = headB;

  if(count1!=count2)
    return 0;
  else
  {
    while(temp2->next!=NULL)
    {
      if(temp1->data!=temp2->data)
        flag = 1;
      flag1 = flag1->next;
      flag2 = flag2->next;
    }
  }
 return flag;
}
