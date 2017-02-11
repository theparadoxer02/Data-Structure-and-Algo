#include <iostream>
#include <string.h>

using namespace std;

char stack[100];
int top = -1,k;
void infixtopostfix(string infix);
void push(char ch);
char pop();

int main() {
	string infix;
	cout<<"Enter the expression: ";
	cin>>infix;
	infixtopostfix(infix);
}

void push(char sym) {
	if(top==100){
		cout<<"\nOverflow"; 
		return;
	}
	else {
		top = top + 1;
		stack[top] = sym;
	}
}

char pop() {
	char ch;
	if(top==-1){
		cout<<"Underflow";
		return 'z';
	}
	else {
		ch = stack[top];
		top = top -1;
	}
	return ch;
}

int prec(char ch){
	if(ch == 47) { return 5 ; }
	else if (ch == 42) { return 4; }
	else if (ch == 43) { return 3; }
	else { return 2; }
}

int isOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
	}


void infixtopostfix(string infix) {
	string postfix;
	int length = infix.length();
	char symb,temp;
	int index = 0, pos = 0;
	push('#');
	while(index<length){
		symb = infix[index];
		switch(symb) {
			case '(':
				push(symb);
				break;
			case ')':
				while(temp != ')'){
					postfix[pos] = temp;
					pos = pos + 1;
					temp = pop();
				}
				break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
				while(prec(stack[top]>prec(symb))) {
					temp = pop();
					postfix[pos] = temp;
					pos++;
				}
				push(symb);
				break;
			default:
				postfix[pos++]=symb;
				break;
		}
		index++;
	}
	while(top>0) {
		temp = pop();
		postfix[pos++] = temp;
	}
	postfix[pos++] = '\0';
	cout<<postfix;
	return;
}

