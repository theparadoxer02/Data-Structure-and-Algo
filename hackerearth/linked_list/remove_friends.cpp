#include <stdlib.h>
#include <stdio.h>

struct linkedlist {
	int data;
	struct linkedlist *next;
};

typedef struct linkedlist *node;

node createNode(){
	node temp;
	temp = (node)malloc(sizeof(struct linkedlist));
	temp->next = NULL;
	return temp;
} 
node addNode(node head, int value){
	node temp,p;
	p = head;
	temp = createNode();
	temp->data = value;
	if(head == NULL){
		head = temp;
	}
	else{
		while(p->next != NULL){
		    p = p->next;
		}
		p->next = temp;
	}
	return head;
}

void printList(node head){
	//Write the looping code here
	node ptr = head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}

int main() {
	node head = NULL,temp;
	int n, i,val,k,t,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&val);
			head = addNode(head,val);
		}

		node temp1,start;
		start = head;
		for(j=0;j<k;j++)
		{
			node ptr = head;
			while(ptr->next!=NULL)
			{
				if(ptr->data < ptr->next->data )
				{
					if(ptr==head){ head=ptr->next; }
					temp1 = ptr;
					ptr = ptr->next;
					free(temp1);
					break;
				}
			ptr = ptr->next;
			}
		}
	printList(head);		

	}
	return 0;
}