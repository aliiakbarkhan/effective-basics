#include<stdio.h>
//adding 3 numbers
int main(int argc, char const *argv[])
{
    int num_1;

    printf("enter number=");

    scanf("%d", &num_1);

    int num_2;

    printf("enter number =");

    scanf("%d", &num_2);

    int num_3;

    printf("enter number =");

    scanf("%d", &num_3);

    printf("Total sum =%d", num_1 + num_2 + num_3);
    return 0;
}
