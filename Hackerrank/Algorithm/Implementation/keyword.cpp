#include <iostream>
#include <string>
using namespace std;

int main()
{

	string current;
	int flag;
	const string str [] = {"auto" ,"break","case","char","const" ,"continue","default" ,"do","double" ,"else" ,"enum","extern"};
	for(int i=0;i<5;i++)
	{
		cin>>current;
		flag=0;
		for(int j=0;j<10;j++)
		{
			if(current==str[j])
				{ flag = 1; break; }
		}
		if (flag == 1)
			cout<<"Keyword"<<endl;
		else //check for if it is identifier
		{
			char ch = str[i][0];
			if(ch == '_' || (ch>=0 && ch<=9) || (ch>='a' && ch <='z') || (ch>='A' && ch<='Z'))
				cout<<" Identifier "<<endl;
			else 
				cout<<" Neither Keyword Not Idenifier "<<endl;
		}
	}

	return 0;

}