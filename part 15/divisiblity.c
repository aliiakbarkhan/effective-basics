//by ali akbar khan
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
if (num % 7 ==0 && num % 5 == 0)
    {
        printf("%d is divible by both",num);
    }
    else if (num % 5 == 0)
    {
        printf("%d is divible by 5",num);
    }
    else if (num % 7 ==0)
    {
        printf("%d is divible by 7",num);
    }
    
    else{
        printf("not divisible by both 7 or 5");
    }
    
    return 0;
}
