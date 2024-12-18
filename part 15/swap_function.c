#include<stdio.h>

void swap2(int *a, int *b);
int main(int argc, char const *argv[])
{
    int a,b,swap;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("numbers before swap: %d %d\n",a,b);
    swap2(&a, &b);
    printf("numbers after swap: %d %d",a,b);

    return 0;
}
void swap2(int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
