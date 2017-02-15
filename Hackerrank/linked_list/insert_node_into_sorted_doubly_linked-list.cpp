
Node * SortedInsert(Node * head, int data)
{
    // Create node that will be inserted. The next and prev fields are unset for now
    Node * insert = new Node; 
    insert->data = data; 
    // Right off the bat, handle the edge case of an empty list.
    if(!head)
        return insert;
    // And the edge case of data being smaller than the first element in the list. 
    if(head->data > data)
    {
        insert->next = head;
        head->prev = insert;
        return insert;
    }
    // If made it here, find the consecutive nodes i -> j such that i <= data <= j or i <= data and j = NULL
    Node * cur, * last;
    for
    (
        last = head, cur = head->next;
        cur != NULL && !(last->data <= data && cur->data >= data);
        last = cur, cur = cur->next
    );
    // Connect the data: change i -> j to i -> data -> j.
    last->next = insert;
    insert->prev = last;
    insert->next = cur;
    if(cur)
        cur->prev = insert;
    // Return same head as before
    return head;
}