#include<stdio.h>
int main(int argc, char const *argv[])
{
    //write a program to calculate area of a rectangle
    int len;
    int wid;
    
    printf("AREA OF RECTANGLE\n");
    printf("--------------------\n");
    printf("enter you length =\n");
    scanf("%d",&len);

    printf("enter you width =\n");
    scanf("%d",&wid);

    printf("Area =%d\n",len*wid);

    //calculate area of circle and modify the same program to calculate the volume of a cylinder given its radius and hight.
    //for circle
    int piee=3.14;
    int radd;
    printf("AREA OF CIRCLE\n");
    printf("------------------\n");
    printf("enter radius =\n");
    scanf("%d",&radd);

    printf("AREA =%d\n",piee*radd*radd);

    //for cylinder
        int piee2=3.14;
    int radd2;
    int highh2;
    printf("VOLUME OF CYLINDER\n");
    printf("------------------\n");
    printf("enter radius =\n");
    scanf("%d",&radd2);

    printf("enter hight =\n");
    scanf("%d",&highh2);
    int sq11=radd2*radd2;
    printf("VOLUME =%d\n",piee2*sq11*highh2);

    //write a program to convert celceus to farenhite
    float celc;
    printf("CELCIUS TO FARENHEIT CONVERTER\n");
    printf("----------------------------\n");
    printf("enter value in CELCIUS =\n");
    scanf("%f",&celc);

    printf("Answer in FARENHEIT =%f\n",celc * 1.8 + 32);

    

    return 0;
}
