#include <stdio.h>
int main(void) {
	int x;
	printf("Enter a Integer : ");
	fflush(stdout);
	scanf("%d", &x);
	printf("You entered : %d", x);
}