#include <stdio.h>

int main(){
	int arr[15], arrs[15];
	int i, e;

	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdout);
	scanf("%d",&e);

	printf("\nInput %d number of elements in the array : \n",e);
	for(i=0; i<e; i++){
		printf("\nelement-%d : ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}

	int *p=arr;
	for(i=0; i<e; i++){
		arrs[14-i]=*p;
		p++;
	}

	printf("\nThe elements of array in reverse order are : \n");
	for(i=e-1; i>=0; i--){
		int m=0;
		printf("\nelement - %d : %d\n",(e-m),arrs[14-i]);
		m++;
	}
	return 0;
}
