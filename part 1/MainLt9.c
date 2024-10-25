#include<stdio.h>
#define AI 2.34 //this is 1st way to declear constant
int main(int argc, char const *argv[])
{
    /*this file is about FORMAT SPECIFIER and Constant
    and Escape Sequences*/

    //AI = 3.12; cannot do this since AI is a constant
    const int A_22=34; //this 2nd way to declear constant
    float B_34=23.4455;


    //A_22=36; cannot do this since a_22 is a constant
    printf("The vale of A is %d and value of B is %10.2f\n", A_22,B_34);
    /*
    
printf("This is a good boy %a.bf",var); 
it will print var with b decimal points in a "a" character space.
*/
printf("%24.4f thanks\n",B_34);//now it will take space of 24 characters from left hand side
//printf("%-9.4f\n",B_34); if "-" then from right hand side.
    printf("%d\n",A_22);
    printf("%f\n",AI);
    //Escape Sequence
    printf("this is a baclslesh \\ \n %f",AI); //to print backslesh
    printf("this is a baclslesh \n %f",AI);// to start new line
    printf("this is a baclslesh \\n \n%f",AI);// to print "\n" 
    printf("this is a baclslesh \t\t \n %f",AI);//to provide tab spaces
    printf("this is a baclslesh \a \n %f",AI);// to use vindows alarm
    return 0;
}
