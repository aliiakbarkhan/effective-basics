#include<stdio.h>
int main(int argc, char const *argv[])
{
    //for loop
    
int aa;
int bb;
for (aa = 0, bb=0;aa < 5, bb <2; aa++)
{
    printf("%d %d\n",aa,bb);
    bb++;
}

//Write a C program to print all alphabets from a to z. – using while loop

char ch_1;
for ( ch_1 = 'a'; ch_1<= 'z'; ch_1++)
{
    printf("%c\n",ch_1);
}

//Write a C program to print all even numbers between 1 to 100. – using while loop

int i;
int lim2;
printf("enter your limit =\n");
scanf("%d",&lim2);

for (i = 0; i < lim2; i++)
{
    if (i%2==0)
    {
        printf("%d\n",i);
    }
}

//Write a C program to print all odd number between 1 to 100.

int ii;
int lim2;
printf("enter your limit =\n");
scanf("%d",&lim2);

for (ii = 0; ii < lim2; ii++)
{
    if (ii%2 !=0)
    {
        printf("%d\n",ii);
    }
}

//Write a C program to find sum of all natural numbers between 1 to n.

    int i, n, sum=0;


    printf("Enter upper limit: ");
    scanf("%d", &n);


    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);

//Write a C program to print multiplication table of any number.

int a1;
int c1;
printf("Enter your DIGIT = \n");
scanf("%d",&c1);

for (a1 = 0; a1 <= 10; a1++)
{
    printf("%d X %d = %d\n",c1,a1,c1*a1);
}

//C program to count number of digits in an integer

    return 0;
}

