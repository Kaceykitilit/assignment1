
#include <stdio.h>
#include <math.h>
int main()
{
    //Intializing
    
    float principal,rate,tme,CI;
    //Entry of data
    printf("Enter principal:");
    scanf("%f",&principal);
    
    printf("Enter rate:");
    scanf("%f",&rate);
    
    printf("Enter time:");
    scanf("%f",&tme);
    //Calculating Compound Interest
    CI=principal*(pow((1 + rate/100),tme));
    printf("Compound Interest=%f",CI);
    return 0;
}
