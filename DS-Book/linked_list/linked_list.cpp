#include <iostream>
#include <stdlib.h>
using namespace std;

struct NODE {
	int info;
	struct NODE *next;
};
struct NODE *S = NULL;
struct NODE *p,*temp,*ptr,*dup;
int n,count = 0,pos;

void insertbegin() {
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
}

void insertend() {
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
}

void Display() {
	temp = S;
	while(temp->next != NULL){
		cout<<temp->info<<" ";
		temp = temp->next;
	}
}

void dlete() {
	temp = S;
	while(temp->next != NULL){
		count++;
		temp = temp->next;
	}
	cout<<"Enter the position you want to delete 1-"<<count<<": ";
	cin>>pos;
	ptr = S;
	for(int i=0;i<pos;i++){
		temp = ptr;
		temp = temp->next;
	}
	temp->next = ptr->next;
}

int main() {
	int ch, ITEM;
	char cr;
	do {
		cout<<"1.Enter the elements at the beginning\n";
		cout<<"2.Insert the elements at the end\n";
		cout<<"3.Display the elements\n";
		cout<<"4.Delete an elements\n";
		cout<<"6.Exit"<<"\n\n";
		cout<<"Enter your choice:  ";
		cin>>ch;
		switch(ch) {
			case 1: insertbegin();
				break;
			case 2: insertend();
				break;
			case 3: Display();
				break;
			case 4: dlete();
				break;
		}
		cout<<"Do you want to contiue? (y/n)";
		cin>>cr;
	}while(cr=='y'||cr=='Y');
}