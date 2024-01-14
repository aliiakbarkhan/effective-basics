#include<stdio.h>
int main(int argc, char const *argv[])
{
    int data[5],sum=0;
    printf("enter elements");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&data[i]);
        printf("you entered=%d\n",data[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum=sum+(data[i]);
        
    }
    printf("sum=%d\n",sum);
    return 0;
}
