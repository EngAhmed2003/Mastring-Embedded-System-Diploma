#include <stdio.h>

int main(){

	int m=29;
	printf("Address of m : %p\n",&m);
	printf("value of m : %d\n",m);

	int *ab=&m;
	printf("Address of m : %p\n",ab);
	printf("value of m : %d\n",*ab);

	m=34;
	printf("Address of m : %p\n",ab);
	printf("value of m : %d\n",*ab);

	*ab=7;
	printf("Address of m : %p\n",&m);
	printf("value of m : %d\n",m);

	return 0;
}
