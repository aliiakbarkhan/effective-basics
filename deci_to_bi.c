#include<stdio.h>
void bicon(int n){
    int i=0, b[40];
    while (n > 0)
    {
        b[i]=n%2;
        n = n/2;
        i++;
    }
    for (int j = i-1    ; j >= 0    ; j--)
    {
        printf("%d",b[j]);
    }
    
    
}
int main(int argc, char const *argv[])
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    bicon(num);

    return 0;
}
