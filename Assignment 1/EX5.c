#include <stdio.h>
int main(void) {
	char x ;
	printf("Enter Character : ");
	fflush(stdout);
	scanf("%c", &x);
	printf("ASCII value of %c = %d",x,x);
}