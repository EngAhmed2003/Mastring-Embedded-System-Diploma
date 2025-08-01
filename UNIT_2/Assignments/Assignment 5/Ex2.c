#include <stdio.h>
int factorial(int a) {
	if(a==0||a==1){
		return 1;
	}
	else{
		a *=factorial(a-1);
	}
	return a ;
}
int main() {
	int a ;
	printf("Enter a positive integer : ");
	fflush(stdout);
	scanf("%d",&a);
    printf("The result is: %d\n", factorial(a));
    return 0;
}