#include <stdio.h>

int main()
{
  int t;
  int i,val,flag;
  scanf("%d",&t );
  while(t--)
  {
    flag = 0;
    char str[1000];
    scanf("%d",&val);
    i=0;
    if(val%21 == 0)
    {
        printf("The streak is broken!\n");continue;
    }
    sprintf(str,"%llu",val);
    while(str[i] != '\0')
    {
      if(str[i]=='2' && str[i+1]=='1')
        {
          flag = 1;
          break;
          continue;
        }
      i++;
    }
    if(flag==1)
    {
      printf("The streak is broken!\n");
    }
    else
      printf("The streak lives still in our heart!\n");
  }
  return 0;
}
