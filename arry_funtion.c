#include<stdio.h>
int maxarry(int n[1000]);
int main(int argc, char const *argv[])
{
    int a[1000];
    printf("enter values in Arry:\n");
    printf("enter value of Arry[0]:");
    scanf("%d",&a[0]);
    printf("\nenter value of Arry[1]:");
    scanf("%d",&a[1]);
    printf("\nenter value of Arry[2]:");
    scanf("%d",&a[2]);
    printf("\nenter value of Arry[3]:");
    scanf("%d",&a[3]);
    printf("\nenter value of Arry[4]:");
    scanf("%d",&a[4]);

    maxarry(a);
    
    return 0;
}
int maxarry(int n[1000]){
    if (n[0]>n[1])
    {
        if (n[0]>n[2])
        {
            if (n[0]>n[3])
            {
                if (n[0]>n[4])
                {
                    printf("%d is greatest",n[0]);
                }
                
            }
            
        }
        
    }
    else if (n[1]>n[2])
    {
        if (n[1]>n[2])
        {
            if (n[1]>n[3])
            {
                if (n[1]>n[4])
                {
                    printf("%d is greatest",n[1]);
                }
                
            }
            
        }
        
    }
    else if (n[2]>n[3])
    {
        if (n[2]>n[4])
        {
            printf("%d is greatest",n[2]);
        }
        
    }
    else if (n[3]>n[4])
    {
        printf("%d is greatest",n[3]);
    }
    else{
        printf("%d is greatest",n[4]);
    }

}
