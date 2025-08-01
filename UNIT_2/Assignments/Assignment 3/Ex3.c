#include<stdio.h>
#include <string.h>
int main(){
	int r , c , x , y , a[10][10] , b[10][10] ;

	printf("Enter Rows and Column of Matrix : ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);

	printf("Enter Elements of Matrix :\n");
	for(r=0;r<x;r++){
		for(c=0;c<y;c++){
			printf("Enter elements a%d%d : ",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[r][c]) ;
		}
	}
	printf("Entered Matrix :\n");
	for(r=0;r<x;r++){
		for(c=0;c<y;c++){
			printf("%d\t",a[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<x;r++){
		for(c=0;c<y;c++){
			b[c][r]=a[r][c];
		}
	}
	printf("Transpose of Matrix :\n");
	for(r=0;r<y;r++){
		for(c=0;c<x;c++){
			printf("%d\t",b[r][c]);
		}
		printf("\n");
	}
	return 0 ;
}
