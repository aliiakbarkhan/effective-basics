#include<stdio.h>
int main(int argc, char const *argv[])
{
    //Write a C program to find maximum between two or three numbers.
    
    int aa_1;
    int aa_2;
    int aa_3;

    printf("Enter Your First Number =\n");

    scanf("%d",&aa_1);

        printf("Enter Your Second Number =\n");
    
    scanf("%d",&aa_2);

            printf("Enter Your Third Number =\n");
    
    scanf("%d",&aa_3);

    if (aa_1>aa_2)
    {
    printf("Your First Number %d is Greater\n",aa_1);
        if (aa_2>aa_3)
        {
            printf("Your First Number %d is Greater then %d and %d\n",aa_1,aa_2,aa_3);
        }
        
    }
    else if (aa_2>aa_3){
        printf("Your Second Number %d is Greater then %d and %d\n",aa_2,aa_1,aa_3);
    }
    else
    printf("Your Third Number %d is Greater then %d and %d\n",aa_3,aa_1,aa_2);
    

    //Write a C program to check whether a number is negative, positive or zero.

    int bb_1;

    printf("enter your number =\n");

    scanf("%d", &bb_1);

    if (bb_1<0)
    {
        printf("Number %d is Negetive\n",bb_1);
    }
    else if (bb_1>0){
        printf("Number %d is Positive\n",bb_1);
    }
else
printf("Number is Zero");

//Write a C program to check whether a number is divisible by 5 and 11 or not.

int bb_2;

printf("Enter Number To Check Its Divisiblety =\n");

scanf("%d",&bb_2);

if (bb_2%5==0){
    printf("Number %d is divisible by 5\n",bb_2);

}
else if (bb_2%11==0)
{
    printf("Number %d is divisible by 11\n",bb_2);
}
else
printf("Number Is Not Divisible By 5 or 11");

//Write a C program to check whether a character is alphabet or not.

char cc_1;
printf("enter your character =\n");

scanf("%c",&cc_1);

if ((cc_1>='a' && cc_1<='z'))
{
    printf("Character is a Alphabet\n");
}
else if ((cc_1<='A' && cc_1<='Z'))
{
        printf("Character is a Alphabet\n");
}
else if (cc_1>=0 && cc_1<0)
{
    printf("Character is not Alphabet\n");
}

//Write a C program to input any alphabet and check whether it is vowel or consonant.
/*
char ch;


    printf("Enter any character: ");
    scanf("%c", &ch);



    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
    ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {

        printf("'%c' is Consonant.", ch);
    }
    else 
    {
        printf("'%c' is not an alphabet.", ch);
    }
*/
//Write a C program to input any character and check whether it is alphabet, digit or special character.
/*char temp_12;

printf("enter value = \n");

scanf("%c",temp_12);

if ((temp_12>='a' && temp_12<='z')) 
{
    printf("is a alphabet\n");
}
else if (( temp_12>='A' && temp_12<='Z'))
{
    printf("is a alphabet\n");
}
else if (temp_12>='0' && temp_12<='9')
{
    printf(" is an number\n");
}
else{
printf("is a symbol\n");
}
*/
    return 0;
}
