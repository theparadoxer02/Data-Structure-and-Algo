#include<stdio.h> 
//#include<conio.h> 
#include<stdlib.h>  

int *stack; //pitbull style worldwide variable

void create_stack(int*); //prototype de diya
int push(int*,int*); //turbo c++ rota hai
int pop(int*,int*); //bloody 16 bit compiler

void main()
{
	int option; //beech mein yaad aya ki option ke liye ek variable chahiye
	int TOS,*p; //sabse uppar wala element ka index aur uska pointer
	
	p = &TOS; //TOS ka pointer bana diya
	
	while(1)
	{
		system("cls"); //dev-c++ mein clrscr kaam nahi karta
		
		printf("1. Create stack.\n"); //stack banane wala option
		printf("2. Push.\n"); //stack mein push karo khush raho
		printf("3. Pop.\n"); //stack ke top ko pop karo
		printf("4. Exit.\n"); //kalti marne wala option
		
		scanf("%d",&option); //aapke paas chaar option hai
		
		switch(option) //computer ji option ko lock kardijiye
		{
			case 1:
				create_stack(stack); //function define karne se pehle likh diya
				break;
			
			case 2:
				TOS=push(stack,p); //pichla comment padho
				break;
				
			case 3:
				//TOS=pop(stack,p); //
				break;
				
			case 4:
				exit(1); //nau do gyarah hogaya
				break; //iski zarurat nahi but OCD....
			
			default:
				printf("Invalid choice\n"); //user ko samjh nhi ata ki bas chaar option hai
		}
	}
}

void create_stack(int* a) //ab asli kaam shuru hoga
{
	int n; //user bta kitne ka stack chahiye
	
	system("cls"); //swach bharat abhiyaan
	
	printf("Enter size of stack:\n"); //abe ruk puchne de
	scanf("%d",&n); //haan ab bta
	
	a = (int *) malloc(n*sizeof(int)); //ye maine khud se sikha tha, LDS mein yeh padhana baaki hai
}

int push(int *a,int *t) //ab dusra asli kaam shuru hoga
{
	int x = *t; //aise karne se pointer ke bullshit se bachte hai
	
	system("cls"); //NaMo ka prakop mere C ke program tak agaya
	
	if(*t==0) //update karna maangta hai
	{
		printf("Enter element to be pushed:\n"); //bta kya daalna hai user
		scanf("%d",&a[x]); //abhi tu bta
		return ++x; //because return x+1 is too mainstream
	}
	
	printf("Enter element to be pushed:\n"); //bta kya daalna hai user
	x++; //ruk TOS badhane de
	scanf("%d",&a[x]); //abhi tu bta
	
	return x; //
	
}

int pop(int *a,int *t) //ab teesra asli kaam shuru hoga
{
	
	int x = *t; //pichle function ka pehla comment dekho
	
	system("cls"); //clean c program, green c program
	
	printf("Element pushed out of stack:%d\n",stack[x]); //nishkasit kardiya element ko
	x--; //me: isko uppar hi decrement karna chahiye; inner me: nahi nichey kar
	
	system("pause"); //dev-c++ mein getch() kaam nahi karta
	
	return x;	
}
//newline de diya, compiler rona mat