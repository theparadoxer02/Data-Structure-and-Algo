#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int n,val;
    char ch;
    cin>>n;
    while(n--)
    {
    	cin>>ch;
    	if(ch=='E') { cin>>val; q.push(val); cout<<q.size()<<endl; }
    	else if(ch=='D') { 
    		if(!q.empty())
    		{
    			cout<<q.front()<<" ";
    			q.pop(); 
    			cout<<q.size()<<endl;
    		}
    		else cout<<"-1 0"<<endl;
    	}
    }
    return 0;
}
