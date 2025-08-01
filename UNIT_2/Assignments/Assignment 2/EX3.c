#include <stdio.h>
int main(void) {
	char c ;
	float num1 , num2 , num3 ;

	do {
		printf("Enter Three Numbers :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%f %f %f", &num1,&num2,&num3);

		if (num1>num2&num1>num3) {
			printf("The Largest Number is :%f\n",num1);
		}
		else if (num2>num1&num2>num3) {
			printf("The Largest Number is :%f\n",num2);
		}
		else if (num3>num2&num3>num1) {
			printf("The Largest Number is :%f\n",num3);
		}
		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
	} while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
}