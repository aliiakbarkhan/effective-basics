#include<stdio.h>
int main(int argc, char const *argv[])
{
   int a[100],i;
   for ( i = 0; i <= 9; i++)
   {
   printf("enter value of a[%d]:",i);
   scanf("%d",&a[i]);

   }
   for ( i = 0; i < 10; i++)
   {
   printf("%d",a[i]);
    /* code */
   }
   
   
    return 0;
}
