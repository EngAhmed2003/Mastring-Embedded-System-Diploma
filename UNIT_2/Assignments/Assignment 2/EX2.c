#include <stdio.h>
int main(void) {
	char c , x ;
	do {
		printf("Enter an Alphabet :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &x);

		if (x=='A' || x=='a' || x=='E' || x=='e' || x=='I' || x=='i' || x=='O' || x=='o' || x=='U' || x=='u') {
			printf("%c is Vowel.\n", x);
		} else {
			printf("%c is Constant.\n", x);
		}
		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
	} while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
}