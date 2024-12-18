#include<Stdio.h>
int main(){
	int i, arr[8] = {9,2,11,13,3,4,8,17};
	int min = arr[0];
	for(i = 0; i<8; i++){
		if(min>arr[i]){
			min = arr[i];
		}
	}
	printf("%d",min);
	return 0;
}
