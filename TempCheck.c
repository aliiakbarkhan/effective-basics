#include<stdio.h>
int main(int argc, char const *argv[])
{
    //to find size of integer
    char a_li='a';
    printf("%lu\n", sizeof(a_li));
    //to sum up
    int a;
    printf("TYPE VALE OF a\n");
    scanf("%d\n", &a);
    int b;
    printf("TYPE VALE OF B\n");
    scanf("%d\n", &b);
    int c;
    printf("Type value of C\n");
    scanf("%d\n",&c);
    printf("Total is: %d\n",a+b+c);
    return 0;
}
