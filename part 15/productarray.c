#include<Stdio.h>
int main(){
	int i, pro = 0, arr[5] = {1,2,3,4,5};
	for(i =0; i<5; i++){
		pro = pro * arr[i];
	}
	printf("total product: %d",pro);
	return 0;
}
