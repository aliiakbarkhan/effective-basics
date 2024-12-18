#include<stdio.h>
int main(int argc, char const *argv[])
{
    int mt1;
    printf("Enter Your Test Name\n");
        printf("----------------------------\n");
            printf("FOR MATHS ENTER '1\n For Physics enter '2'\n For Both enter '3'\n");
            scanf("%d",&mt1);
            if (mt1==1)
            {
                printf("you have won 15$\n",mt1);
            }
            else if (mt1==2)
            {
                printf("you have won 25$\n",mt1);
            }
            else if (mt1==3)
            {
                printf("you have won 50$\n",mt1);
            }
            else
            printf("better luck next time\n",mt1);
            
            
            
    return 0;
}
