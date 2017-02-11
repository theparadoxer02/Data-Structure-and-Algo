#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,i,j;
    char str[10]; 
    for(i=0;i<t;i++){
        gets(str);
        for(j=0;j<len(str-1);j+2) {
            printf("%c",str[j]);
        }
        printf(" ");
        for (i=1;i<len(str)/2; i+2) {
            printf("%c",str[i]);
        }
    }
    return 0;
}
