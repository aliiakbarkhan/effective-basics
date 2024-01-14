#include<stdio.h>
int main(int argc, char const *argv[])
{
    //rhombus pattern
    int n;
    printf("enter you number");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
     for (int j = 0; j < i; j++)
     {
        printf(" ");
     }
     for (int k = 0; k <n ; k++)
     {
        printf("* ");
     }
     
     printf("\n");
     
    }
    
    return 0;
}
