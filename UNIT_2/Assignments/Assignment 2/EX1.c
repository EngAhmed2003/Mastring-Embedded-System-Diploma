#include <stdio.h>
int main(void) {
	char c;
	int x;
	do {
		printf("Enter an Integer You Want to Check  :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &x);

		if (x % 2 != 0) {
			printf("%d is Odd.\n", x);
		} else {
			printf("%d is Even.\n", x);
		}
		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
	} while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
}