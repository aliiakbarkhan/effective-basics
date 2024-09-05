#include<stdio.h>
int main(){
	int i,ev,od,arr[6] = {1,3,5,7,9,11};
	for(i = 0; i<6; i++){
		if(arr[i]%2==0){
			ev = ev + arr[i];
		}
		else{
			od = od + arr[i];
		}
	}
	printf("%d	%d",ev,od);
	return 0;
}
