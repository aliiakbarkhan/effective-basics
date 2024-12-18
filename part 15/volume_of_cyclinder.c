#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r,h,pi=3.14;
    printf("enter value of radius and hight=");
    scanf("%d%d",&r,&h);
    int r2=r*r;
    int area=pi*r2*h;
    printf("area of circle is=%d",area);
    return 0;
}
