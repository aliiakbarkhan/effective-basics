#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int age_11,marks_11;

    printf("enter your age\n");

    scanf("%d", &age_11);

        printf("enter your marks\n");

    scanf("%d", &marks_11);

    switch (age_11)
    {
    case 11:
        printf("Your age is 11\n");
        switch (marks_11)
        {
        case 45:
            printf("your marks is 45\n");
            break;
        
        default:
        printf("your marks is not 45\n");
            break;
        }
        break;
    
        case 22:
        printf("Your age is 22\n");
        switch (marks_11)
        {
        case 55:
            printf("your marks is 55\n");
            break;
        
        default:
        printf("your marks is not 55\n");
            break;
        }
        break;
    
        case 33:
        printf("Your age is 33\n");
        switch (marks_11)
        {
        case 66:
            printf("your marks are 66\n");
            break;
        
        default:
        printf("your marks are not 66\n");
            break;
        }
        break;
    
    default:
    printf("You are not Ali\n");
        break;
    } 
    //write a program to find grade of a student given his marks based on below:
    int marks_12;

    printf("enter your marks");

    scanf("%d", &marks_12);

    if (marks_12>=90 && marks_12<=100)      
    {
        printf("Your Grade Is 'A'!!!");
    
    }
    else if (marks_12>=80 && marks_12<90)
    {
        printf("your grade is 'B'");
    }
    else if (marks_12>=70 && marks_12<80)
    {
        printf("your grade is 'C'");
    }
    else if (marks_12>=60 && marks_12<70){
        printf("your grade is D");
    }
    else 
    printf("your grade is F");
    

    

    return 0;
}
