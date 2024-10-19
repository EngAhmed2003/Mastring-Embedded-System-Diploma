#include <stdio.h>
int main(void) {
	char c, a;
	do {
		printf("Enter a Character :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &a);

		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
			printf("%c is an Alphabet.\n", a);
		} else {
			printf("%c is not an Alphabet.\n", a);
		}

		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
	} while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
}