#include<Stdio.h>
int main(){
	int n, i, arr[7] = {1,2,3,4,5,6,7};
	printf("Enter Fix Number:\n");
	scanf("%d",&n);
	for(i = 0; i<7; i++){
		if(arr[i]>n){
			printf("%d ",arr[i]);
		}
	}
	
	return 0;
}
