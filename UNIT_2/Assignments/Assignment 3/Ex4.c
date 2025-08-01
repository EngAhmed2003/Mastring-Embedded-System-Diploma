#include<stdio.h>
#include <string.h>
int main(){
	int e , n , i , l , a[20] ;
	printf("Enter Number of Elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);

	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&l);

	for(i=n;i>=l;i--){
		a[i]=a[i-1];
	}
	n++;
	a[l-1]=e;
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0 ;
}