#include<stdio.h>
void ali(); //function declearition
void hasan(); //function declearition
void mumma(); //function declearition
int main(int argc, char const *argv[])
{
    printf("i am main\n");
    ali(); //function calling
    hasan(); //function calling
    mumma(); //function calling
    printf("i am again main\n");
    return 0;
}
void ali(){ //function defineing
    printf("i am ali\n");
}
void hasan()
{ //function defineing
printf("i am hasan\n");
}
void mumma(){ //function defineing
    printf("i am rizwana\n");
}
