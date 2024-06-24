#include <stdio.h>

int main()
{
    //initializing
    float units;
    float charge;
    // unit input
    printf("Enter unit amount;");
    scanf("%f",&units);
    //
    if (units <= 199){
        charge = 120 * units;
    }else if ( units <= 400){
        charge = 150 * units;
    }else if (units <= 600){
        charge = 180 * units;
    }else if (units > 600){
        charge = 200 * units;
    }
    printf("Charges are %f",charge);
        
    }