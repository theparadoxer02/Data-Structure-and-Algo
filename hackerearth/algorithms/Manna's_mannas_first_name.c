#include <stdio.h>


int main()
{
  int t,i;
  scanf("%d",&t);
  while(t--)
  {
    char str[1000];
    int count1=0,count2=0;
    scanf("%s",str);
    i = 0;
    while(str[i]!='\0')
    {
      if(str[i]=='S' && str[i+1]=='U' && str[i+2]=='V' && str[i+3]=='O')
        {
            if(str[i+4]=='J' && str[i+5]=='I' && str[i+6]=='T')
              {
                count2++;
                i= i+6;
              }
              else
              {
                count1++;
                i = i + 3;
              }
        }
        i++;
    }
    printf("SUVO = %d, SUVOJIT = %d\n",count1,count2 );
  }
  return 0;
}
