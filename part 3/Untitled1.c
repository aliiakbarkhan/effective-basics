#include<Stdio.h>
#include<string.h>
int main(){
	enum posts{Hunter,Civilan,Pro,Noob};
	struct{
		char name[30];
		int salary;
		enum posts post;
	}employee;
	
	strcpy(employee.name,"Ali");
	employee.salary = 1000;
	employee.post = Pro;
	
	printf("Name:%s\t",employee.name);
	printf("Salary:%d\t",employee.salary);
	printf("Post: %d\n",employee.post);
	printf("Pro value is : %d",Pro);
	
	return 0;
}
