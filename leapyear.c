
#include <stdio.h>

int main()
{
    //initializing
    int year;
    //Year entry by user
    printf("Enter year;");
    scanf("%d",&year);
    //checking whether the year is a leap year 
    if ((year % 4 == 0 && year % 100 !=0 ) || (year %400 ==0)){
        printf("%d is a leap year",year);
    }else{
        printf("%d is not a leap year");
    }

    return 0;
}