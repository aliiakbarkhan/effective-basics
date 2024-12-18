#include<stdio.h>
int evenodd(int a);
int main(int argc, char const *argv[])
{
    int a,check;
    printf("enter number:");
    scanf("%d",&a);
    check = evenodd(a);


    return 0;
}
int evenodd(int a){
    if (a%2==0)
    {
      printf("%d is even",a);
    }
    else{
        printf("%d is odd",a);
    }
}