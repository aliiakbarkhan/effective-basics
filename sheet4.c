#include<stdio.h>
int main(int argc, char const *argv[])
{
    //loop
    
    int a=0;

    while (a>-10)
    {
        printf("%d is value od i\n",a);
        a--;
    }
    //write a program to print natural numbers from 10 to 20.
    int i=0;

    while (i<=20)
    {
        printf("%d is a natural number between 10 to 20\n",i);
        i++;
    }
    //write a program to print first n natural numbers using do-while loop
    int ini=0;
    int ur;
    printf("enter number =\n");
    scanf("%d",&ur);

    do
    {
        printf("%d is natural number till %d\n",ini,ur);
        ini++;
    } while (ini<ur);

    int q;

    for (q = 0; q < 32; q++)
    {
        printf("%d is value of q till 32\n",q);
    }

        //write a program to print first n natural numbers using for loop
        int w=0;
        int aa;
        printf("enter number =\n");
        scanf("%d",&aa);

        for (w = 0; w < aa; w++)
        {
            printf("%d is natural numbers till %d\n",w,aa);
        }
        
    
    int ii;

    for ( ii = 5; ii; ii--)
    {
        printf("%d is values till 0\n",ii);
    }

    //write a program to print n natural numbers in reverse order.
    int rev;
    
    printf("enter number =\n");
    scanf("%d",&rev);

    for (rev; rev; rev--)
    {
        printf("%d is natural numbers till 0\n",rev);
    }
            
            //write a program to print multiplication table of a given number n.
            int I;
            int temp=0;
            printf("enter number =\n");
            scanf("%d",&I);

            for (temp; temp<=10; temp++)
            {
                printf("%d X %d =%d\n",temp,I,I*temp);
            }
            
                //write a program to print multiplication table of 10 in reverse.
            int I2=10;
            int temp2=10;

            for (temp2=10; temp2; temp2--)
            {
                printf("%d X %d =%d\n",temp2,I2,I2*temp2);
            }
            
        int i;
        int agee;
        for ( i = 0; i < 10; i++)
        {

            printf("%d\n enter your age =\n",i);
            scanf("%d",&agee);
            if (agee>10)
            {
                break;
            }
            
        }
        
//sum first 10 natural numbers -using while loop
int sun=0;
int n2=1;
while (n2<=10)
{
    sun=sun+n2;
    n2++;
    

}
printf("sum of number =%d",sun);

//sum first 10 natural numbers -using do loop
int sum2=0;
int i21=1;

do
{
    sum2=sum2+i21;
    i21++;
} while (i21<=10);

printf("sum of 10 numbers =%d",sum2);

//sum first 10 natural numbers -using for loop
int sum3=0;
int i23;

for ( i23 = 1; i23 <=10;  i23++)
{
    sum3=sum3+i23;
}
printf("sum of number is =%d",sum3);
//sum of numbers occuring in the table of 8
//in this code there are 2 things to do
//      1.multiply
//      2.addition
int multi=8;
int i4;
int tiffen=0;

for ( i4 = 1; i4 <= 10; i4++)
{
    multi=8*i4;
    tiffen+=multi;
}
printf("sum is =%d\n",tiffen);

//calulate factorial of given number using for loop
//   -suppose we have n=10 so we have to get numbers from 1 to 9
//   and then multiply all of them with eachother like
//   factorial of 5 is 5 * 4 * 3 * 2 * 1 which equals to 120.
    int x,fact=1,n;

    printf("Enter a number to find factorial: ");

    scanf("%d",&n); 

    for(x=1;x<=n;x++)

        fact=fact*x; 

    printf("Factorial of %d is: %d",n,fact);

    return 0;
}
