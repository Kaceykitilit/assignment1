
#include <stdio.h>

int main()
{
    float amount, discount;
    printf("Enter amount;");
    scanf("%f",&amount);
    if (amount > 5000){
        discount = 0.3 * amount;
        printf("Discount is %f",discount);
    }else{
        printf("No discount");
    }
    

    return 0;
}