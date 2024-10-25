#include<stdio.h>
 int square(int a)
{
return a*a;
}

int main(int argc, char const *argv[])
{

    int n,s;
    do
    {
            printf("enter the value of n =");
    scanf("%d",&n);
    s=square(n);
    printf("%d\n",s);
    } while (n!=0);
    

}



