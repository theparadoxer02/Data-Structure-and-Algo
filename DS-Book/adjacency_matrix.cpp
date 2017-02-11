#include <iostream>
#define max 20
using namespace std;

int adj[max][max];
int n;

int main()
{
	int origin,destin,i,j,max_edge;
	char graph;

	cout<<"Enter no of nodes: ";
	cin>>n;
	cout<<"\nEnter the type of graph: ";
	cin>>graph;

	if(graph=='u')
		max_edge = n*(n-1)/2;
	else
		max_edge = n*(n-1);

	for(i=1;i<=max_edge;i++)
	{
		cout<<"\nEnter edge "<<i<<" (0 0 to quit):  ";
		cin>>origin>>destin;
		if( (origin==0) && (destin==0))
			break;

		if(origin<=0 || origin>n || destin >n || destin <=0 )
		{
			cout<<"\n!Invalid: ";
			i--;
		}
		else
		{
			adj[origin][destin] = 1;
			if(graph == 'u')
				adj[destin][origin] = 1;
		}

	}

	cout<<"The adjancy matric is given: \n";

	for(i=1;i<=max_edge;i++)
	{	
		for(j=1;j<=max_edge;j++)
			cout<<adj[destin][origin]<<" ";
		cout<<endl;
	}

	return 0;
}