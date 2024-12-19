#include <stdio.h>
#include <math.h>
int power_num(int n1, int n2){
	if(n2!=0){
		return (pow(n1,n2)) ;
	}
	else
		return 1;
}
int main(){
	int base , power ;
	printf("Enter base number : ") ;
	fflush(stdout) ;
	scanf("%d",&base) ;

	printf("Enter power number : ") ;
	fflush(stdout) ;
	scanf("%d",&power) ;
	printf("%d^%d = %d", base, power, power_num(base,power));
	return 0 ;
}
