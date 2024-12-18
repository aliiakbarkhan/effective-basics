#include<stdio.h>
int main(int argc, char const *argv[])
{
    //right half pyramid
    int n;
    printf("enter value of n");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
