#include <iostream>

using namespace std;

int main()
{
  string str1 = "hackerrank";
  string str2;
  int len,count;
  int t;
  cin>>t;
  while(t--)
  {
    count = 0;
    cin>>str2;
    len = str2.length();
    int j=0;
    for(int i=0;i<=9;i++)
    {
      while(str1[i] != str2[j] && j<=len)
      {
        j++;
      }
      if(str1[i] == str2[j])
        count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
