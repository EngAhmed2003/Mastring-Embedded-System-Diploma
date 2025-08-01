#include <stdio.h>
int main(void) {
	char c;
	float num;
	do {
		printf("Enter a Number :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &num);

		if (num > 0) {
			printf("%f is Positive.\n", num);
		} else if (num < 0) {
			printf("%f is Negative.\n", num);
		} else if (num == 0) {
			printf("You Entered Zero.\n");
		}
		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
	} while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
}
