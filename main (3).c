
#include <stdio.h>

int main()
{
    //initializing 
    float principal;
    float rate;
    float tme;
    float SI;
    //input
    printf("Enter principal:");
    scanf("%f",&principal);
    
    printf("Enter rate:");
    scanf("%f",&rate);
    
    printf("Enter time:");
    scanf("%f",&tme);
    //SI formulae
    SI=(principal*rate*tme)/100;
    
    printf("simple interest= %f",SI);

    return 0;
}
