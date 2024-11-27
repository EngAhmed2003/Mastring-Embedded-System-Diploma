#include<stdio.h>
int main(){
	int e , n , i , found=0 , a[20] ;
	printf("Enter Number of Elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);

	for(i=0;i<n;i++){
		if(e==a[i]){
			printf("Number found at location = %d ",i+1);
			found=1;
		}
	}
	if(!found){
		printf("Number not found\n");
	}
	return 0 ;
}