//this is an incomplete code
//undr development
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,a[100];
    for ( i = 0; i < 4; i++)
    {
        printf("enter value of arry[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("unique elemts are:");
    for ( i = 0; i < 4; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            /* code */
        if (a[i] != a[j])
        {
            if (a[i] != a[j+1])
            {
                if (a[i] != a[j+2])
                {
                    printf("%d",a[i]);
                }
                
            }
            
        }
        else if (a[j] != a[j+1])
        {
            if (a[j] != a[j+2])
            {
                printf("%d",a[j]);
            }
            
            
        }
        
        }
        
        

        
        
    }
    

    
    return 0;
}
