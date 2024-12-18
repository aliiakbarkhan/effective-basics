#include<stdio.h>
int main(int argc, char const *argv[])
{

    char name[15],branch[10];
    char roll[10];
    FILE *filepointer;
    filepointer = fopen("alidata2.dat","a+");
    if (filepointer == NULL)
    {
        printf("Not able to open file");
    }
    for (int i = 1; i < 5; i++)
    {
    printf("Enter Name:");
    scanf("%s",&name);
    fprintf(filepointer,"%s,\t",name);
    
    printf("Enter Branch:");
    scanf("%s",&branch);
    fprintf(filepointer,"%s,\t",branch);

 
    printf("Enter Roll No:");
    scanf("%s",&roll);
    fprintf(filepointer,"%s,\n",roll);

    }
    fclose(filepointer);

    return 0;
}
