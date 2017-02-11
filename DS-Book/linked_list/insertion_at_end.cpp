#include <iostream>
#include <stdlib.h>
using namespace std;

struct NODE {
	int info;
	struct NODE *next;
};

int main() {
	cout<<"*** This program is for adding elements to the end of the linked list";
	int n,value;
	struct NODE *p,*temp,*S = NULL;
	cout<<"Enter the number of elements you want to enter"<<endl;
	cin>>n;
	cout<<"Enter values :"<<endl;
	for(int j=0;j<n;j++) {
		p = (struct NODE*) malloc(sizeof(struct NODE));
		cin>>p->info;
		p->next =NULL;
		if(S==NULL) { S = p; }
		else {
				temp = S;
				while(temp->next != NULL) {
					temp = temp->next;
				}
				temp->next = p;
		}
	}

	cout<<"Enter the values of the linked list: "<<endl;
	temp = S;
	while(temp != NULL) {
		cout<<temp->info<<" ";
		temp = temp->next;
	}
	return 0;
}	