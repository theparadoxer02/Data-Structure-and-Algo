#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;


struct table{
	string name;
	int age ;
	string address,hometown;
	struct table *next;
};

int main() {
	int n;
	struct table *start,*p;
	cin>>n;
	while(n--) {
		p = (struct table*) malloc(sizeof(struct table));
		cin>>p->name>>p->age>>p->address>>p->hometown;
		if(start==NULL) { start = p; p->next =NULL; }
		else {
				p->next = start;
				start = p;
		}
	}
	while(p->next != NULL) {
		cout<<"\n"<<p->name;
		p = p->next;
	}
	return 0;
}