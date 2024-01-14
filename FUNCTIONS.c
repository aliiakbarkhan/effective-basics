# include <stdio.h>
void message( ) ; /* function prototype declaration */
int main( )
{
    int n2;
printf("enter you number=");
scanf("%d",&n2);
message( ) ; /* function call */

printf ( "Cry, and you stop the monotony!\n" ) ;
return 0 ;
}
void message( ) /* function definition */
{
int n;
printf("enter value of n=");
scanf("%d",&n); 
if (n==2)
{
    printf ( "hey ali stop it\n" ) ;
}
else
{
printf("you are annoying\n");}
}
