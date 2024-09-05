#include<Stdio.h>
int main(){
	int i, arr[8] = {9,2,11,13,3,4,8,17};
	int max = arr[0];
	for(i = 0; i<8; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("%d",max);
	return 0;
}
