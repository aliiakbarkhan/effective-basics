#include<stdio.h>
int main(int argc, char const *argv[])
{
        printf("CHECK IF YOU ARE FAIL OR PASS\n");
    printf("------------------------------------\n");
    int sub1,sub2,sub3;
    printf("ENTER ENGLISH MARKS =\n");
    scanf("%d",&sub1);

        printf("ENTER MATHS MARKS=\n");
    scanf("%d",&sub2);

        printf("ENTER PHYSICS MARKS=\n");
    scanf("%d",&sub3);


    int tota1 = sub1+sub2+sub3;
    int per1 = tota1 / 300 ;
    int per2 = per1 * 100;
        printf("Total Marks = %d\n",tota1);
    printf("PERCENTAGE = %d\n",per1);
    if (per2>=40)
    {
        printf("YOU ARE PASS\n");
    }
    else
        printf("YOU ARE FAIL\n");
    
    return 0;
}
