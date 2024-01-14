#include<stdio.h>
int main(int argc, char const *argv[])
{
    //C program to check whether triangle is valid or not if angles are given
    int an_1;
    int an_2;
    int an_3;
//A triangle is said to be a valid triangle if and only if sum of its angles is 180 °.
    
    printf("enter angle no.1 =\n");

    scanf("%d",&an_1);

        printf("enter angle no.2 =\n");

    scanf("%d",&an_2);

        printf("enter angle no.3 =\n");

    scanf("%d",&an_3);

    if (an_1+an_2+an_3==180)
    {
        printf("triangle is valide\n");
    }
    else
    printf("triangle is not valide\n");
    
    //C program to check whether triangle is valid or not if Sides are given
    int c_3;
    int c_33;
    int c_333;

        printf("enter side no.1 =\n");

    scanf("%d",&c_3);

        printf("enter side no.2 =\n");

    scanf("%d",&c_33);

        printf("enter side no.3 =\n");

    scanf("%d",&c_333);

    if (c_3+c_33>c_333)
    {
        printf("triangle is valid\n");
    }
    else if (c_333+c_33>c_3)
    {
        printf("triangle is valid\n");
    }
    else if (c_333+c_3>c_33)
    {
        printf("triangle is valid\n");
    }
    else
    printf("triangle is not valid");
    
    
    return 0;
}
