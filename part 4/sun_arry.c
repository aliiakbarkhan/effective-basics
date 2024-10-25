#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[100];
    int i;
        int sum=0;
    for ( i = 0; i < 3; i++)
    {
        printf("enter value of a[%d]",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        sum = sum + a[i];

    }
    printf("%d",sum);

    
    return 0;
}
