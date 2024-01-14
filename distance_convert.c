/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int dist;
    printf("enter distance =");
    scanf("%d",&dist);
    int met= dist*1000;
    int fet= dist*3281;
    float inch= dist*39370.1;
    int cm= dist*100000;
    printf("distance in meter=%d\n",met);
    printf("distance in feet=%d\n",fet);
    printf("distance in inches=%f\n",inch);
    printf("distance in centimeter=%d\n",cm);
    return 0;
}
