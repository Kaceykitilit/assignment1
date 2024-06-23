
#include <stdio.h>

int main()
{
    //initializing
    int num;
    //User input
    printf("Enter numer; ");
    scanf("%d",&num);
    //checking whether the number is divisible by 17
    if(num % 17 == 0){
        printf("%d is divisible by 17",num);
    }else{
        printf("%d is not divisible by 17",num);
    }
    
    

    return 0;
}