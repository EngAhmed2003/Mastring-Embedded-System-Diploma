#include <stdio.h>
int main(void) {
	char c;
	int f, i, a;
	do {
		f = 1;
		printf("Enter an Integer :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &a);
		if (a < 0) {
			printf("Error!!! Factorial of Negative Number Doesn't Exist.\n");
		} else {
			for (i = 1; i <= a; i++) {
				f *= i;
			}
			printf("Factorial : %d\n", f);
		}
		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
	} while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
}