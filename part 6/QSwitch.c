#include<stdio.h>
int main(int argc, char const *argv[])
{
    //Write a C program to print day of week name using switch case.
    
    int day1;

    printf("enter week number(1-7) = ");

    scanf("%d",&day1);

    switch (day1)
    {
    case 1:
        printf("Monday");
        break;
            case 2:
        printf("Tuesday");
        break;
            case 3:
        printf("Wednesday");
        break;
            case 4:
        printf("Thursday");
        break;
            case 5:
        printf("Friday");
        break;
            case 6:
        printf("Saturday");
        break;
            case 7:
        printf("Sunday");
        break;
    
    default:
    printf("number is invalid");
        break;
    }

//C program to check vowel or consonant using switch case

        char ch1;

    printf("enter alphabet = ");

    scanf("%c",&ch1);

    switch (ch1)
    {
    case 'a':
        printf("vowel");
        break;
            case 'e':
        printf("vowel");
        break;
            case 'i':
        printf("vowel");
        break;
            case 'o':
        printf("vowel");
        break;
            case 'u':
        printf("vowel");
        break;
            case 'A':
        printf("vowel");
        break;
            case 'E':
        printf("vowel");
        break;
                    case 'I':
        printf("vowel");
        break;
                    case 'O':
        printf("vowel");
        break;
                    case 'U':
        printf("vowel");
        break;
    
    default:
    printf("%c is Consonant",ch1);
        break;
    }

    //Write a C program print total number of days in a month using switch case.

    int m11;

    printf("enter your month number(1-12) =");

    scanf("%d",&m11);

    switch (m11)
    {
    case 1:
        printf("January has 31");
        break;

            case 2:
        printf("Fabuary has 28");
        break;

            case 3:
        printf("March has 31");
        break;

            case 4:
        printf("April has 30");
        break;

            case 5:
        printf("May has 31");
        break;

            case 6:
        printf("June has 30");
        break;

            case 7:
        printf("July has 31");
        break;

            case 8:
        printf("Agust has 31");
        break;

            case 9:
        printf("Septemder has 30");
        break;

            case 10:
        printf("Octuber has 31");
        break;

            case 11:
        printf("November has 30");
        break;

            case 12:
        printf("December has 31");
        break;
    default:
    printf("Month number is invalid");
        break;
    }
    
   //Write a C program to check whether a number is even or odd using switch case.


    int e11;

    printf("enter your number= ");

    scanf("%d",&e11);

    switch (e11%2)
    {
    case 0:
        printf("number is even");
        break;
    
    case 1:
        printf("number is odd");
        break;
    default:
        break;
    }
    

   //Write a C program to check whether a number is positive, negative or zero using switch case.

    int qq;

    printf("enter number =");

    scanf("%d",&qq);

    switch (qq>0)
    {
    case 1:
        printf("Number is Positive");
        break;
    
        case 0:
    
    switch (qq<0)
    {
    case 1:
        printf("Number is Negetive");
        break;

            case 0:
        printf("Number is zero");
        break;
    
    
    default:
        break;
    }
    }

//C program to create calculator using switch case and functions
float mm;
char zz;
float nn;



float resulttt;

    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

scanf("%f %c %f",&mm,&zz,&nn);
switch (zz)
{
case '+':

    printf("%f",resulttt=mm+nn);
    break;

case '-':

    printf("%f",resulttt=mm-nn);
    break;

    case '*':

    printf("%f",resulttt=mm*nn);
    break;

    case '/':

    printf("%f",resulttt=mm/nn);

    break;
default:
    break;
}
    

    return 0;
}
