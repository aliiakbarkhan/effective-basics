#include<stdio.h>
void india();
void italy();
void japan();
int main(int argc, char const *argv[])
{
    printf("i am main\n");
    india();
    printf("i am main again\n");
    return 0;
}
void india(){
    printf("i am india\n");
    italy();
    printf("i am india again\n");
}
void italy(){
    printf("i am italy\n");
    japan();
    printf("i am italy again\n");
}
void japan(){
    printf("i am japan\n");
}