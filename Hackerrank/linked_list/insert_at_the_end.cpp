Node* Insert(Node *head,int data)
{
  // Complete this method
    if(head == NULL)  //Check if list is empty
        head = new Node{data}; //Inserts node if true
    else
    {
        /*Otherwise if list is not empty,
        Set node ptr to front of the list*/
        Node *ptr = head;
        
        /*Use for loop (or while loop) to go through
        the list until you reach the end*/
        for( ; ptr->next != NULL; ptr = ptr->next);
        
        //Insert node at the end of the list
        ptr->next = new Node{data}; 
    }
    return head;
}