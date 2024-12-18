#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[100];
    int i;
    for ( i = 0; i < 3; i++)
   {
   printf("enter value of a[%d]:",i);
   scanf("%d",&a[i]);

   }
   printf("arry in normal order:\n");
   for ( i = 0; i < 3; i++)
   {

   printf("%d",a[i]);
    /* code */
   }
   printf("\narry in reverce order:\n");
      for (i = 2; i >= 0; i--)
   {

   printf("%d",a[i]);
    /* code */
   }
    return 0;
}
