#include <iostream>
int bisection(int,int);
using namespace std;

int main()
	{
		int val,lower=0,upper=100,output=100;
		char ch='h';
		val=50;
		cout<<"Guess the number between (1-100)\n";
		while(ch=='h'||ch=='l') 
		{
			//cout<<" Lower: "<<lower<<" Upper: "<<upper<<endl<<endl;
			output = bisection(lower,upper);
			cout<<"\nIs the number "<<output<<" ? \n";
			cout<<"Enter 'h' to indicate its too high and 'l' to indicate its too low and 'c' to indicate i guessed correctly. ";
			cin>>ch;

			if(ch=='h')
				upper = output;
			else if(ch=='l')
				lower = output;
		}

	cout<<"\n\nGame over! Your secret number was "<<output<<endl;
	return 0;
}

int bisection(int a,int b)
{
	return (a+b)/2;
}