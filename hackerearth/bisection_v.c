#include<stdio.h>
#include<stdlib.h>
void main()
{
  char ch;
  int mid,lo=0,hi=100;
  printf("\n\n\n---SECRET GUESSING GAME---\n\n");
  printf("\nJust think a number and I will scan that number from your brain!!!\n");
  printf("\n\nGame Rules:");
  printf("\n\tPress l if number is too low");
  printf("\n\tPress h if number is too high");
  printf("\n\tPress c if guess is correct");
  printf("\n\nPlease think of a number between 0-100: ");
  
  
  
  for(int i=0;i<=hi;i++)
  { mid=(hi+lo)/2;
    printf("\nIs your secret number %d: ",mid);
    scanf(" %c",&ch);
    if(ch=='c')
     { printf("\nBravo!! Your secret number is: %d\n",mid); 
       exit(0);
     }
    else  if(ch=='l')
     { 
       lo=mid; 
     }
    else if(ch=='h')
     {
        hi=mid;
     }
   }    
}       
    
    