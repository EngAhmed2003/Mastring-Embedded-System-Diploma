#include <stdio.h>
int main(void) {
	int x , y;
	printf("Enter Two Integer : \n");
	fflush(stdout);
	scanf("%d %d", &x,&y);
	printf("Sum : %d", x+y);
}