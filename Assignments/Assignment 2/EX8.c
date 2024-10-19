#include <stdio.h>
#include <math.h>
int main(void) {
	char c, o;
	float x, y, z;
	do {
		printf("Enter Operator Either + or - or * or / : ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &o);

		printf("Enter Two Operands :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%f %f", &x, &y);
		switch (o) {
		case '+': {
			z = x + y;
		}
			break;
		case '-': {
			z = x - y;
		}
			break;
		case '*': {
			z = x * y;
		}
			break;
		case '/': {
			if (y == 0) {
				printf("It cannot be divided by zero");
			} else {
				z = x / y;
			}
		}
			break;
		default: {
			printf("Wrong Choice Please Try Again \n");
			break;
		}
		}
		printf("%f %c %f = %f\n", x, o, y, z);
		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
	} while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
}