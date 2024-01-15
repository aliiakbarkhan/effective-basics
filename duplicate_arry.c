#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[100],i;
    for ( i = 0; i < 3; i++)
    {
        printf("enter value of arry[%d]",i);
        scanf("%d",&a[i]);
    }
        printf("total duplicate number in arry is:");
        for ( i = 0; i < 3; i++)
        {
            if (a[i] == a[i+1])
            {
                printf("%d",a[i]);
            }
            else if (a[i] == a[i+2])
            {
                printf("%d",a[i]);
            }
            
        }

        
    
    return 0;
}
