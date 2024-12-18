#include<stdio.h>
#include<math.h>

int sq(int a){
    int sq;
    sq = a*a;
    return sq;
}
int main(int argc, char const *argv[])
{
    int a,square;
    printf("enter number:");
scanf("%d",&a);
square = sq(a);
printf("%d",square);

    return 0;
}
