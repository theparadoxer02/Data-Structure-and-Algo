#include <iostream>

#define V 4

#define INF 99999

using namespace std;

void printgraph(int d[][V]);

void floydwarshall(int g[][V])
{
	int d[V][V],i,j,k;
	for(i=0;i<V;i++)
		for(int j=0;j<V;j++)
			d[i][j] = g[i][j];

	for(k=0;k<V;k++)
	{
		for(i=0;i<V;i++)
		{
			for(j=0;j<V;j++)
				if(d[i][j]>d[i][k]+d[k][j])
					d[i][j] = d[i][k] + d[k][j];
		}
	}
	printgraph(d);
}


void printgraph(int d[][V])
{

	cout<<"Following matrix shows the shortest distances between every pair of vertices\n";
	for(int i=0;i<V;i++)
	{
		for(int j=0;j<V;j++)
		{
			if(d[i][j] >= INF)
				cout<<"INF"<<" ";
			else
				cout<<d[i][j]<<"   ";
		}
		cout<<endl;
	}
}


int main()
{
	int g[V][V] = { {0,   5,  INF, 10},
                {INF, 0,   3, INF},
                {INF, INF, 0,   1},
                {INF, INF, INF, 0}};
 
 	floydwarshall(g);

 	return 0;
}