//by ali akbar khan
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int neg,pos,zero,num;
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is positive",num);
    }
    else if (num == 0)
    {
        printf("%d is zero",num);
    }
    else{
        printf("%d is negetive",num);   
    }
    
    
    return 0;
}
