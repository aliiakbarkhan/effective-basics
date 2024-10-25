#include<stdio.h>
int main(int argc, char const *argv[])
{
int nu;
printf("enter temprature in celcius=");
scanf("%d",&nu);
int convert22=1.8*nu;
int convert33=convert22+32;
printf("farenhiet=%d",convert33);
    return 0;
}
