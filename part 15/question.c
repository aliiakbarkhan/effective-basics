#include<stdio.h>
int main(int argc, char const *argv[])
{
//C is a programming langauge.
//one of the oldest and finest.
//developed in 1972 by dennis ritchie at AT&T

//CHAPTER 1: VARIABLES, CONSTANTS & KEYWORDS
/*
VARIABLE: value can change
CONSTANT: value can not change
KEYWORDS: fix words with fixed meaning
*/

/*
TYPES OF VARIABLE:
integer variables as int --  int a=3
real variables as float --  float b=2.1
character variables as char -- char c='a'
*/

int a=3;
float b=2.1;
char c='a';

/*
NAMEING RULES FOR VARIABLES:
dont start with number
no space only _
no # or @ etc
aa and AA are different
*/

/*CONSTANT HAS 3 TYPES: 
INTEGER CONSTANT
REAL CONSTANT
CHARACTER CONSTANT
*/

 /*
 KEYWORDS:
 auto
 double
 int 
 struct
 break
 long 
 else
 swithch
 case
 return
 enum
 union
 typedef
 char
 register
 extern
 const
 short
 float
 unsinged
 continue
 signed
 for
 void
 default
 sizeof
 goto
 volatile
 do
 static
 if
 while
 */

//FIRST C PROGRAM:
printf("hello world\n");
// ; is most importent
//written order = execution order

//Comments: // and /**/

//Library functions: functins like printf

//RECEIVING INPUT FROM THE USER: scanf("%d/%c/%f",&variablename);
//eg:
int foruser;
scanf("%d",&foruser);

//PRACTICE PAPER CHAPTER 1
//write a C program to calculate area of a rectangle
//using hard hard code input
int rectanglelength=23;
int rectanglewidth= 34;
printf("Area of rectangle is = %d\n",rectanglelength*rectanglewidth);
//using input from user
int rectanglelength2;
int rectanglewidth2;
printf("enter length =\n");
scanf("%d",&rectanglelength2);
printf("enter width =\n");
scanf("%d",&rectanglewidth2);
int valval= rectanglelength2*rectanglewidth2;
printf("%d\n",valval);

//calculate the area of a cicle and modift the same program to volumn of cyclender
float piee=3.14;
int radius;
printf("enter radius =");
scanf("%d",&radius);
float radius2= piee*radius*radius;
printf("%f\n",radius2);

//for cylinder
int hight;
printf("enter hight=");
scanf("%d",&hight);
printf("%d",radius2*hight);

//convert from celcius to farenheit
//--multeply by 1.8 and add 32
    return 0;
}
