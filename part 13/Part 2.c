#include<stdio.h>
#include<stdbool.h>
int main(){

int sum1 = 99 + 1;
int sum2 = sum1 + 250;
int sum3 = sum2 + 25;
printf("%d\n",sum3);//not working


int sum4= 45-34;
int sum5= 67*34;
int sum6= 45/24;
int sum7= 45 % 23;
int sum8= ++sum1;
printf("%d\n",sum8);
printf("%d\n",sum7);
printf("%d\n",sum6);
printf("%d\n",sum5);
printf("%d\n",sum4);


int ut=45;
ut+= 5;
printf("%d\n",ut);

int A=1;
A -= 4;
printf("%d\n",A);

int B=44;
B *= 2;
printf("%d\n",B);

int C=35;
C /= 5;
printf("%d\n",C);

int D=1405;
D %= 2;
printf("%d\n",D);

int E=25;
E &= 23;
printf("%d\n",E);

int X=100;
int Y=15;
printf("%d\n",X>Y);

int X2=100;
int Y2=15;
printf("%d\n",X==Y);

int X3=100;
int Y3=15;
printf("%d\n",X!=Y);

int X4=100;
int Y4=15;
printf("%d\n",X<Y);

int X5=100;
int Y5=15;
printf("%d\n",X>=Y);

int X6=100;
int Y6=15;
printf("%d\n",X<=Y);

int X7=100;
int Y7=15;
printf("%d\n",X>Y || X<Y);

int X8=100;
int Y8=15;
printf("%d\n",X>Y && X<Y);

int Myint = 12444545;
printf("%lu\n", sizeof(Myint));

bool AliIsSmart= true;
bool AliIsnOTsMART= false;
printf("%d\n",AliIsSmart);
printf("%d\n",AliIsnOTsMART);

bool isHamburgerTasty = false;
bool isPizzaTasty = true;

// Find out if both hamburger and pizza is tasty
printf("%d\n", isHamburgerTasty == isPizzaTasty);


int MyAge=76;
int VotingAge=18;
printf("%d\n",MyAge>=VotingAge);


int MyAge2=6;
int VotingAge2=18;
if (MyAge2>=VotingAge2) {
    printf("Old enough to Vote\n");
} else {
    printf("Not Old Enough To Vote\n");
}

if (23<10){
    printf("10 is Greater\n");
}
else {
    printf("10 is Smaller\n");
}

int time=12;
if (time>10)
{
    printf("Good Morning\n");
}
else {
    printf("Good night\n");
}

return 0;

}
