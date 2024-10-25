#include<stdio.h>
int main()
{
    int * pc;
    int c;
    c=22;
    printf("address of c:=%u",&c);
    intf("\n value of c:=%d",c);
    pc=&c;
    printf("\n address of pointer pc:=%u",pc);
    printf("\n content of pointer pc:=%d",*pc);
    c=11;
    printf("\n address of pointer pc:=%u",pc);
     printf("\n content of pointer pc:=%d",*pc);
     pc=2;
      printf("\n address of c%u",&c);
      printf("\n value of c%d",&c);
}