// by ali akbar khan
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter year");
    scanf("%d",&num);
    if ((num % 4 == 0) && (num % 100 != 0))
    {
        printf("LEAP YEAR");
    }
else if (num%400==0)
{
    printf("LEAP YEAR");
}
else{
    printf("NOT LEAP YEAR");
}

    return 0;
}
