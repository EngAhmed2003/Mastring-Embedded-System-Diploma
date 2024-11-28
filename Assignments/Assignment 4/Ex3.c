#include<stdio.h>
#include <string.h>
int main(){
	int l , i ;
	char s[50] , r[50];

	printf("Enter a String : ") ;
	fflush(stdin) ; fflush(stdout) ;
	gets(s) ;
	l=strlen(s);
	for(i=0;i<l;i++){
		r[i]=s[l-i-1];
	}
	r[l]='\0';
	printf("Reverse is String : %s",r) ;
	return 0 ;
}