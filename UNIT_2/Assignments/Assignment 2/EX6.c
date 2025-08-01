#include <stdio.h>
int main(void) {
	char c;
	int sum,i ,a;
	do {
		sum=0 ;
		printf("Enter an Integer :\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &a);

		for(i=0;i<=a;i++)
		{
			sum+=i ;
		}
		printf("Sum : %d\n",sum);

		printf("Do You Want to Try Again ? (Y/N): ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &c);
	} while (c == 'Y' || c == 'y');

	printf("Exiting program.\n");
}