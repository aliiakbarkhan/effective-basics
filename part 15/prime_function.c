//this is an incomplete code
//i am so sorry for in conianence
#include<stdio.h>
void prime(int n){
    if (n/n==1)
    {
        printf("%d is prime number",n);
    }
    else{
        printf("%d is not prime",n);
    }
    
}
int main(int argc, char const *argv[])
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    prime(num);
    return 0;
}
