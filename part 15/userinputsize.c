#include<Stdio.h>
int main(){
	int i, sizee;
	printf("enter size of arry:\n");
	scanf("%d",&sizee);
	int arr[sizee];
	for(i = 0; i<sizee; i++){
		printf("enter value of %d element:\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i = 0; i<sizee; i++){
		printf("%d	",arr[i]);
	}
	return 0;
}
