
#include<stdio.h>
int main(int argc, char const *argv[])
{
    //Write a C program to input week number and print week day.
    
    int ali_10;

    printf("enter number =");

    scanf("%d",&ali_10);

    if (ali_10==1)
    {
        printf("Monday");
    }
    else if (ali_10==2)
    {
        
        printf("Thuesday");
    }
    else if (ali_10==3)
    {
        
        printf("WednesDay");
    }
    else if (ali_10==4)
    {
        
        printf("Thrusday");
    }
    else if (ali_10==5)
    {
        printf("Friday");
    }
    else if (ali_10==6)
    {
        
        printf("Saturday");
    }
    else if (ali_10==7)
    {
        
        printf("Sunday");
    }
    else
    printf("Invalid Number");
    
    
    //Write a C program to input month number and print number of days in that month.

    int ali_month;

    printf("enter month number = ");

    scanf("%d",&ali_month);

        if (ali_month==1)
    {
        printf("31");
    }
    else if (ali_month==2)
    {
        
        printf("28/29");
    }
    else if (ali_month==3)
    {
        
        printf("31");
    }
    else if (ali_month==4)
    {
        
        printf("30");
    }
    else if (ali_month==5)
    {
        printf("31");
    }
    else if (ali_month==6)
    {
        
        printf("30");
    }
    else if (ali_month==7)
    {
        
        printf("31");
    }
        else if (ali_month==8)
    {
        
        printf("31");
    }
    else if (ali_month==9)
    {
        
        printf("30");
    }
    else if (ali_month==10)
    {
        
        printf("31");
    }
    else if (ali_month==11)
    {
        
        printf("30");
    }
    else if (ali_month==12)
    {
        
        printf("31");
    }

    else
    printf("Invalid Number");
    
    
    
    
    return 0;
}

