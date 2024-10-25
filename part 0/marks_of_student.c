/*If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int en,hin,math,scin,sst;
    printf("enter your marks=");
    scanf("%d%d%d%d%d",&en,&hin,&math,&scin,&sst);
    int tot= en+hin+math+scin+sst;
    printf("aggregate marks=%d\n",tot);
    int per2=(tot/500)*100;
    printf("percentage=%d",per2);
        return 0;
}
