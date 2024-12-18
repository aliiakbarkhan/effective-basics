//by ali akbar khan
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    printf("enter numbers:");
    scanf("%d%d%d%d",&a, &b, &c, &d);
if (a>b)
{
    if (a > c)
    {
        if (a>d)
        {
            /* code */
    printf("%d is greater",a);
        }
        
    
    }
    
}
else if (b > c)
{
    if (b>d)
    {
        /* code */
    printf("%d is greatest",b);
    }
    
}
else if (c > d)
{
    printf("%d is great",c);

}
else{
    printf("%d is greatest",d);
}


    return 0;
}
