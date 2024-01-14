#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r,pi=3.14;
    printf("enter value of radius=");
    scanf("%d",&r);
    int r2=r*r;
    int area=pi*r2;
    printf("area of circle is=%d",area);
    return 0;
}
