#include<stdio.h>
int main(int argc, char const *argv[])
{
    char temp_12;

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

    return 0;
}
