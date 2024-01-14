#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int age_11;

    printf("enter your age =\n");

    scanf("%d",&age_11);
    printf("you have entered %d as you age\n",age_11);

    if (age_11>=18){
        printf("you can vote");
    }
    else if (age_11<=8){
        printf("you are not even a teenager");
    }
    else
    {
        printf("you can't vote");
    }
// gift distribution
    int maths_18=15;
    int scince_18=25;
    int maths_scince_18=45;
    int temp_18;
    printf("Please enter your subject\n");
    printf("for maths enter 1\n");
    printf("for scince enter 2\n");
    printf("for both enter 3\n");
    printf("subject no =");
    
    scanf("%d",&temp_18);
    
    if (temp_18==1)
    {
        printf("You have won $ %d GIFT!!!!!",maths_18);
    }
    else if(temp_18==2){
        printf("You have won $ %d GIFT!!!!!",scince_18);
    }
    else if (temp_18==3){
        printf("You have won $ %d GIFT!!!!!",maths_scince_18);
    }
    else
    printf("Better Luck Next Time ");
    
    return 0;
}
