
#include <stdio.h>

int main()
{
    int Math ,Eng ,Kiswahili,average;
    if (Math,Eng,Kiswahili < 0 || Math,Eng,Kiswahili > 100 ){
        printf("Invalid entry");
    }
    printf("Math;");
    scanf("%d",&Math);
    printf("Eng;");
    scanf("%d",&Eng);
    printf("Kiswahili;");
    scanf("%d",&Kiswahili);
    average = ((Math + Eng + Kiswahili)/3);
    printf("Average: %d\n",average);
    if (average >= 70){
        printf("Grade :A");
    }else if(average >= 60){
        printf("Grade :B");
    }else if (average >= 50){
        printf("Grade :C");
    }else if(average >= 40){
        printf("Grade :D");
    }else if (average < 40){
        printf("Fail");
    }
}