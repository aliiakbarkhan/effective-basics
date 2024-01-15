#include<stdio.h>
int main(int argc, char const *argv[])
{
    int  i,a[100],b[100];
        for ( i = 0; i < 3; i++)
        {
            printf("enter value of arry[%d]",i);
            scanf("%d",&a[i]);
        }
        printf("value of arry 1:");
        for ( i = 0; i < 3; i++)
        {
            printf("%d",a[i]);
            /* code */
        }
        

        printf("\nvalue of arry 2:");
        for ( i = 0; i < 3; i++)
        {
            b[i]=a[i];
            printf("%d",b[i]);
        }
        
        


    return 0;
}
