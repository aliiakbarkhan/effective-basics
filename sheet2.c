#include<stdio.h>
int main(int argc, char const *argv[])
{
//write a program to check whether a number is divisible by 97 or not?
    int a1;
    printf("TO CHECK DIVISIBLITY OF NUMBER BY 97\n");
    printf("--------------------------------------\n");
    printf("Enter Your Number =\n");
    scanf("%d",&a1);

    if (a1%97==0)
    {
        printf("%d is Divisible by 97\n",a1);
        /*OR YOU CAN ALSO USE:
        if (a1%97!=0)
    {
        printf("%d is NOT Divisible by 97\n",a1);
        
    }
    else
    printf("%d is Divisible by 97\n",a1);
    
        */
    }
    else
    printf("%d is not Divisible by 97\n",a1);
    
    
    
    return 0;
}
