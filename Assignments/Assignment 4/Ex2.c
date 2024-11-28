#include<stdio.h>
#include <string.h>
int main(){
	int l=0 , i ;
	char s[50] ;

	printf("Enter a String : ") ;
	fflush(stdin) ; fflush(stdout) ;
	gets(s) ;

	for(i=0;s[i]!='\0';i++){
		l+=1 ;
	}
	printf("Length of String : %d",l) ;
	return 0 ;
}