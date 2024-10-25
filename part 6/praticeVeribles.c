#include<stdio.h>
int main(int argc, char const *argv[])
{
        //Area of Rectangle
        
int length_one;
printf("enter length =");

scanf("%d", &length_one);

int width_one;
printf("enter width =");

scanf("%d",&width_one);

printf("Area Of Rectangle = %d\n",length_one*width_one);


//Area of Circle
float radius;

printf("enter radius=");

scanf("%f",&radius);

float hight;

printf("enter hight=");

scanf("%f",&hight);

float pie=3.14;


printf("Volume of Cylinder is = %f\n", pie*radius*radius*hight);

//Temprature Converter from C to F

float celsius;

printf("enter celsius =");

scanf("%f",&celsius);

float cel_number=32;
float cel_float=1.8;

printf("answer in F= %f\n",celsius*cel_float+cel_number);

//Calculate Simple Intrest

float ver_principal;

printf("enter principal =");

scanf("%f",&ver_principal);
float ver_rateofint;

printf("enter rate of intrest =");

scanf("%f",&ver_rateofint);

float ver_hun=100;



float ver_time;

printf("enter time =");

scanf("%f",&ver_time);

int hun_dred=100;

printf("%f", ver_principal*ver_rateofint*ver_time/hun_dred);


    return 0;
}
