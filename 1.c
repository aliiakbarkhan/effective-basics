#include<stdio.h>
int main(int argc, char const *argv[])
{
    //right angle triangle
    int n;
    printf("enter value of n=");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}

