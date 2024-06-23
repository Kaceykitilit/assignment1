
#include <stdio.h>

int main()
{
    //initializing
    int num;
    //User input
    printf("Enter number: ",num);
    scanf("%d",&num);
    //checking if number is even or odd
    if (
        num % 2 ==0
        ) {
            printf("%d is Even",num);
    }else{
        printf("%d is Odd",num);
    }
    

    return 0;
}