#include <iostream>
#include <stdlib.h>
using namespace std;

struct NODE {
	int info;
	struct NODE *next;
};

int main() {
	cout<<"*** For Adding elements to the front of the linked list";
	int n,value;
	struct NODE *p,*temp,*S = NULL;
	cout<<"Enter the number of elements you want to enter"<<endl;
	cin>>n;
	cout<<"Enter values :"<<endl;
	for(int j=0;j<n;j++) {
		p = (struct NODE*) malloc(sizeof(struct NODE));
		cin>>p->info;
		if(S==NULL) { S = p; p->next =NULL; }
		else {
				p->next = S;
				S = p;
		}
	}

	cout<<"Enter the values of the linked list: "<<endl;
	temp = S;
	while(temp != NULL) {
		cout<<temp->info<<" ";
		temp = temp->next;
	}
	cout<<endl;
	return 0;
}	