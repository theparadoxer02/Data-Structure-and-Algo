#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double cost ,taxvalue,tipvalue;
    int tip, tax,totalcost;
    scanf("%lf%d%d",&cost,&tip,&tax);
    taxvalue = cost * ((float)tax/100);
    tipvalue = cost * ((float)tip/100);
    totalcost = cost + taxvalue + tipvalue;
    printf("The total meal cost is %d dollars.",totalcost);
    return 0;
}
