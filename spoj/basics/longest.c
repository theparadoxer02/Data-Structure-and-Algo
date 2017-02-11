#include<stdio.h>

void main() {
   int k=0,j;
   int lk=0,range=0,lrange,brange;
   int final_lk,final_k;
   char s[100];
   scanf("%s",s);
   

   for(int i=0;s[i]!='\0';i++) { 
     if(s[i+1]>=s[i]){ ; }
     else {
         k=i;
         lrange=range;
         range=k-lk;
         
         if(range>lrange) { 
         brange=range;
             final_lk=lk;
             final_k=k;
         } 
        lk=k+1;
      }
  }
  printf("\n\n");
  printf("Longest substring in alphabetical order is :");

  for(int i=final_lk;i<=final_k;i++) {
                printf("%c",s[i]);
              }
  printf("\n");
  }
