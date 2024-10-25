#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d,e;
    printf("ENTER YOUR MARKS\n");
        printf("----------------------------\n");
    printf("english=\n");
    scanf("%d",&a);
    printf("hindi=\n");
    scanf("%d",&b);
    printf("maths=\n");
    scanf("%d",&c);
    printf("scince=\n");
    scanf("%d",&d);
    printf("sst=\n");
    scanf("%d",&e);
    int total1=a+b+c+d+e;
    printf("total marks = %d\n",total1);
    int per1=total1*100;
    int per2=per1/500;
    printf("percentage =%d\n",per2);
    if (per2>=90)
    {
        printf("grade is A");
    }
    else
    printf("geade is b");
    
    
    
    
    return 0;
}
