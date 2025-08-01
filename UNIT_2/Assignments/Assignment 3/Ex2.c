#include <stdio.h>
int main(){
	int i , n;
	float num[100] , sum=0 , avg;

	printf("Enter the numbers of data : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("Enter a number : ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&num[i]) ;
	}
	for(i=0;i<n;i++){
		sum+=num[i] ;
	}
	avg=sum/n ;
	printf("Average = %.2f",avg) ;
	return 0 ;
}
