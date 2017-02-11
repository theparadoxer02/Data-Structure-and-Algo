#include <iostream>
#include <stdlib.h>
using namespace std;

struct link {
	int pow;
	int coefficient;
	struct link *next;
};

struct link *poly1=NULL,*poly2=NULL,*poly=NULL;
void create(struct link *node){
	char ch;
	do{
		cout<<"Enter the co-efficient of polynomial: ";
		cin>>node->coefficient;
		cout<<"Enter the power of polynomial: ";
		cin>>node->pow;
		node->next = (struct link*) malloc(sizeof(struct link));
		node = node->next;
		node->next = NULL;
		cout<<"\nContinue(y/n)\n";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
}

void show(struct link *node) {
	while(node->next != NULL) {
		cout<<node->coefficient<<node->pow;
		node = node->next;
	}
}

void addpoly(struct link *poly1,struct link *poly2, struct link *poly){
	while(poly1->next && poly2->next){
		
		if(poly1->pow > poly2->pow){
			poly->coefficient = poly1->coefficient;
			poly->pow = poly1->pow;
			poly1 = poly1->next;
		}

		else if(poly2->pow > poly1->pow){
			poly->coefficient = poly2->coefficient;
			poly->pow = poly->pow;
			poly2 = poly2->next;
		}

		else{
			poly->pow = poly1->pow;
			poly->coefficient = poly1->coefficient + poly2->coefficient;
			poly = poly->next;
			poly1 = poly1->next;
			poly2 = poly2->next;
		}
		poly->next = (struct link*) malloc(sizeof(struct link));
		poly = poly->next;
		poly->next = NULL;
	}

	while(poly1->next || poly2->next) {
		if(poly1->next) {
			poly->pow = poly1->pow;
			poly->coefficient = poly1->coefficient;
			poly1 = poly1->next;
		}

		else if(poly2->next) {
			poly->pow = poly2->pow;
			poly->coefficient = poly2->coefficient;
			poly2 = poly2->next;
		}

		poly->next = (struct link*) malloc(sizeof(struct link));
		poly = poly->next;
		poly->next = NULL;
	}
}

int main() {
	char ch;
	do {
		poly1 = (struct link*) malloc(sizeof(struct link));
		poly2 = (struct link*) malloc(sizeof(struct link));
		poly = (struct link*) malloc(sizeof(struct link));

		cout<<"Enter the first number: "<<endl;
		create(poly1);
		cout<<"Enter the second number: "<<endl;
		create(poly2);
		cout<<"First Polynomial: ";
		show(poly1);
		cout<<" ";
		cout<<"\n Second Polynomial: ";
		show(poly2);
		addpoly(poly1,poly2,poly);
		//show(poly);
		cout<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
}