#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct CalC
{
	int num1;
	int num2;
	char ope;
	
	CalC inputS(){
		CalC c;
		cout<<"Enter Number 1, NUMBER 2 and OPERATION TO PERFROM:"<<endl;
		cin>> c.num1;
		cin>>c.num2;
		cin>>c.ope;
		
		switch (c.ope){
			case "+":
				printf("%d",c.num1+c.num2);
				break;
			
			case "-":
				printf("%d",c.num1-c.num2);
				break;
				
			case "*":
				printf("%d",c.num1*c.num2);
				break;
				
			case "/":
				printf("%d",c.num1/c.num2);
				break;
		}
		return c;
	}
};

int main(){
	CalC s2;
	s2.inputS();
	getch();
}
