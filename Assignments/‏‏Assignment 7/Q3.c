#include <stdio.h>

int main(){
	char arr[20]={'\0'}, arrs[20]={'\0'} ;
	int i;

	printf("Input a string : ");
	fflush(stdout);
	gets(arr);

	char *p=arr;
	for(i=0; i<20; i++){
		arrs[19-i]=*p;
		p++;
	}
	for(i=0; i<20; i++){
		if(arrs[i] != '\0')
			printf("%c", arrs[i]);
	}
	return 0;
}