#include<stdio.h>
int main(int argc, char const *argv[])
{
    int len,wid;
    printf("enter length & width=");
    scanf("%d%d",&len,&wid);
    int area= len*wid;
    printf("AREA OF RECTANGLE IS =%d",area);
    return 0;
}
