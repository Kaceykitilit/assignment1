
#include <stdio.h>

int main()
{
    //initialization
    int marks;
    //Student mark entry
    printf("Enter marks; ");
    scanf("%d",&marks);
    //checking for grade
    if (marks >= 70){
        printf("Grade A ");
    }else if(marks >= 60){
        printf("Grade B ");
    }else if(marks >= 50){
        printf("Grade C ");
    }else if(marks >= 40){
        printf("Grade D ");
    }else if(marks >= 60){
        printf("Grade Fail ");
    }
    return 0;
    }