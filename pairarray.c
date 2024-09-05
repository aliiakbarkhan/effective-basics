#include<stdio.h>
int main(){
	int i,j,k, arr[8] = {1,2,3,4,5,6,7,8};
	int total = 0;
	
	for(i = 0; i < 8; i++){
		for(j = i+1;j<8;j++){
			for(k = j+1; k<8;k++){

				if(arr[i] + arr[j] + arr[k] == 12){
					printf("(%d	%d	%d)\n",arr[i],arr[j],arr[k]);
					total++;
			}
			
			}
		}
	}
	printf("%d	: are total number of pairs",total);
	return 0;
}
