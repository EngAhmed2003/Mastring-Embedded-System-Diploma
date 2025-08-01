#include <stdio.h>

int main(){
	char arr[30];

	char*p;
	p=arr;

	for(int i=0; i<26; i++){
		*p=i+'A';
		p++;
	}
	p=arr;

	for(int i=0; i<26; i++){
		printf(" %c", *p);
		p++;
	}

	return 0;
}
