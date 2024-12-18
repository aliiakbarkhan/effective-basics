#include<stdio.h>
int main(){
	int i, a =10, mark[a];
	for(i = 0; i<10; i++){
		printf("Enter %d student mark:",i+1);
		scanf("%d",&mark[i]);
	}
	for(i = 0; i<10; i++){
		if(mark[i]<35){
			printf("%d\n",i);
		}
	}
	return 0;
}
