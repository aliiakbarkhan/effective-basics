#include<Stdio.h>
int main(){
	int i, sum = 0, arr[5] = {1,2,3,4,5};
	for(i =0; i<5; i++){
		sum = sum + arr[i];
	}
	printf("total sum: %d",sum);
	return 0;
}
