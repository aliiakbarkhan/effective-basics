#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year_23;

    printf("enter Year =");

    scanf("%d",&year_23);

    if (year_23%400==0){
        printf("It is a Leap year");
    }
    else if (year_23%100==0)
    {
        printf("It is not a Leap year");
    }
    else if (year_23%4==0){
        printf("It is a leap year");
    }
    else{
        printf("It is not a leap year");
    }

    
    return 0;
}
