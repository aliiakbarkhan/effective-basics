#include<stdio.h>
int main(int argc, char const *argv[])
{
    //inverted right half pyramid
    int n;
    printf("enter you number");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
     for (int j = 0; j < n-i; j++)
     {
        printf("* ");
     }
     printf("\n");
     
    }
    
    return 0;
}
