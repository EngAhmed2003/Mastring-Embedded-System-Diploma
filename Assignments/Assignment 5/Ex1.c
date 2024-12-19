#include <stdio.h>
int prime(int n){
	if(n<1)
		return 0 ;
	for(int i=2 ;i<n;i++){
		if(n%i==0)
			return 0 ;
	}
	return n ;
}
int main(){
	int n1, n2 ,temp=0 ;
	printf("Enter Two Numbers(Intervals) : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d%d",&n1,&n2) ;
	if(n1>n2){
		temp=n1 ;
		n1=n2 ;
		n2=temp ;
	}
	int size =n2-n1-1 ;
	int arr[size] ;
	for(int i=0; i<size; i++){
		arr[i] = n1+1+i ;
	}

	for (int i = 0; i < size; i++) {
		if(prime(arr[i])){
			printf("%d ", arr[i]) ;
		}
	}
}