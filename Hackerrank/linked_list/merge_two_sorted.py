def MergeLists(headA, headB):

		if(headA is None):
		    return headB
		elif(headB is None):
		    return headA

		if(headA.data <= headB.data):
		    result = headA
		    result.next = MergeLists(headA.next, headB)
		else:
		    result = headB
		    result.next = MergeLists(headA, headB.next)
		    
		return result