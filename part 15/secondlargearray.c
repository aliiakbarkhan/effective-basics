#include<stdio.h>
int main(){
	int i,arr[5] = {1,6,9,5,9};
	int max = 0;
	int smax = 0;
	for(i = 0; i<5; i++){
		if(arr[i]>max){ 
		 smax = max;
			max = arr[i];
		}
		else if(smax < arr[i] && max != arr[i]){
			smax = arr[i];
		}
	}
	printf("%d",smax);
	return 0;
}
