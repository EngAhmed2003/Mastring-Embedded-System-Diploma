#include <stdio.h>
int main(void) {
	float x,y , temp ;
	printf("Enter value of a : ");
	fflush(stdout);
	scanf("%f", &x);

	printf("Enter value of b : ");
	fflush(stdout);
	scanf("%f", &y);

	temp = x ;
	x = y ;
	y = temp ;
	printf("After swapping, value of a = %f\n",x);
	printf("After swapping, value of b = %f\n",y);
}