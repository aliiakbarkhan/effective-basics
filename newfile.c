#include<stdio.h>
int main(int argc, char const *argv[])
{
int m=5,n=10,o=0;
int *p1;
int *p2;
p1=&m;
p2=&n;
printf("p1=%d\n",p1);
printf("p2=%d\n",p2);
o=*p1+*p2;
printf("*p1+*p2=%d\n",o);
p1++;
printf("p1++=%d\n",p1);
p2--;
printf("p2--=%d\n",p2);

    return 0;
}

