#include<stdio.h>
int calsum(int x,int y,int z);
int fun( );
int main(int argc, char const *argv[])
{
    int a,b,c,sum;
    printf("enter you numbers=\n");
    scanf("%d%d%d",&a,&b,&c);
sum=calsum(a,b,c);
printf("your sum is=%d\n",sum);
int n;
n=fun(n);
printf("%d",n);
    return 0;
}
int calsum (int x,int y,int z){
int d;
d= x+y+z;
return d;
}
int fun( ){
    int n ;
printf ( "Enter any number " ) ;
scanf ( "%d", &n ) ;
if ( n >= 10 && n <= 90 )
return ( n ) ;
else
return ( n + 32 ) ;

}
