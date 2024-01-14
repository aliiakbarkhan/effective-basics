#include <stdio.h>
int main(int argc, char const *argv[])
{
    //Student's Result 
    
    int a;

    printf("English");

    scanf("%d", &a);

    int b;

    printf("Hindi");

    scanf("%d", &b);

    int c;
        printf("Maths");

    scanf("%d", &c);

    int d;
        printf("Physics");
    
    scanf("%d", &d);

    int f;
        printf("Chemistry");

    scanf("%d", &f);

    int tot_22=a+b+c+d+f;
        printf("Total Marks= %d\n",tot_22);

        int per_22=tot_22*100/500;

        printf("Percentage = %d\n",per_22);

        if (per_22 >= 90)
        printf("Grade A\n");
        else if (per_22 < 90 && per_22>50)
        printf("Grade B\n");
        else
        printf("Grade C\n");
        

    //3 Veriables which one is greatest
    int A;

    printf("enter value of a =");

    scanf("%d",&A);

    int B;

        printf("enter value of b =");

    scanf("%d", &B);

    int C;

        printf("enter value of c =");

    scanf("%d", &C);

if(A>B)
{
 if (B>C)
 printf("A is greatest");
}
else if (B>C)
printf("B is Greatest");
else
printf("C is Greatest");
    return 0;
}
