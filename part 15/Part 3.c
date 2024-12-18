#include<stdio.h>
#include<stdbool.h>
//Part 3
int main(){

int time = 12;
if (time<10){
    printf("Good Morning\n");
}
else if (time>20){
    printf("Good Night\n");
}
else {
    printf("Good Evening\n");
}


int num = 0;
if (num>0){
    printf("Number Is Greater then 0\n");
}
else if (num<0){
    printf("number is smaller then 0\n");
}
else{
    printf("number is Zero\n");
}


int time2=19;
(time2<20)? printf("Good Day\n"):  printf("Good Night\n");


int days=9;
switch (days){
case 1:
    printf("Monday\n");
    break;
case 2:
    printf("Tuesday\n");
    break;
case 3:
    printf("Webnesday\n");
    break;
case 4:
    printf("Thursday\n");
    break;
case 5:
    printf("Friday\n");
    break;
case 6:
    printf("Saturday\n");
    break;
case 7:
    printf("Sunday\n");
    break;
default:
    printf("Week Mein Kitne Din Hote Hain??Hero\n");
}




return 0;
}
