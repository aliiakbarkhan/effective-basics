#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    //Write a program to find grade of a student given his marks??
    int marks23;
    printf("STUDENT MARKS\n");
    printf("-----------------\n");
    printf("ENTER YOUR MARKS\n");
    scanf("%d",&marks23);

    if (marks23<=60)
    {
        printf("grade is F\n");
    }
    else if (marks23>60 && marks23<=70)
    {
        printf("grade is D\n");
    }
        else if (marks23>70 && marks23<=80)
    {
        printf("grade is C\n");
    }
    else if (marks23>80 && marks23<=90)
    {
    printf("grade is B\n");
    }
            else if (marks23>90 && marks23<=100)
    {
        printf("grade is A\n");
    }
    
//write a c program to find greatest of 4 numbers
int ap;
int bp;
int cp;
int dp;

printf("Enter 4 Numbers\n");
printf("------------------------\n");
printf("Enter First =\n");
scanf("%d", &ap);

printf("Enter second =\n");
scanf("%d", &bp);

printf("Enter third =\n");
scanf("%d", &cp);

printf("Enter Forth =\n");
scanf("%d", &dp);

if (ap>bp)
{
    if (ap>cp)
    {
        if (ap>dp)
        {
            printf("%d is greatest\n",ap);
        }
        else{
            printf("%d is greatest\n",dp);
        }
    }
        else
        {
            printf("%d is big\n",cp);
        }

}
else if (bp>cp)
{
    if (bp>dp)
    {
        printf("%d is greatest\n",bp);
    }
    else{
        printf("%d is greatest\n",dp);
    }
    
}
else if (cp>dp)
{
        printf("%d is greatest\n",cp);
}
else
{
    printf("%d is greatest\n",dp);
}

//Write a program to determine wheter a character enterd by the user is lowercase or not
char alp;

printf("Enter Alphabet =\n");
scanf("%c",&alp);

if (alp>='a' && alp<='z')
{
    printf("lower\n");
}
else{
    printf("upper\n");
}

//write a program to find whether a year enterd by user is a leap year or not.take year as an input from the user
int yar;
printf("enter year =\n");
scanf("%d",&yar);

if (yar%400==0)
{
    printf("leap year\n");
}
else if (yar%100==0)
    {
        printf("not leap year\n");
    }
    
else if (yar%4==0)
{
    printf("leap year\n");
}
else{
    printf("not leap year\n");
}

return 0;
}
