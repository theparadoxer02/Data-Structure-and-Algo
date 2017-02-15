ListNode *detectCycle(ListNode *head) { 
	ListNode *slow = head, *fast = head; 
	bool flag = false; 
	while(fast && fast->next && fast->next->next) {
	 	fast = fast->next->next; 
		slow = slow->next; 
		if(fast == slow) { 
			flag = true; 
			break; 
		} 
	} 
	if(!flag) 
		return NULL;