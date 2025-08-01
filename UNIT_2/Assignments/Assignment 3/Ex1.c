#include <stdio.h>
int main(){
	float a[2][2] ;
	float b[2][2] ;
	float sum[2][2];
	int r , c ;
	printf("Enter the elements of 1st matrix\n");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("Enter the a%d%d:",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f;\n",&a[r][c]);
		}
	}
	printf("Enter the elements of 2st matrix\n");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("Enter the b%d%d:",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[r][c]);
		}
	}
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			sum[r][c]=a[r][c]+b[r][c] ;
		}
	}
	printf("Sum Of Matrix:\n");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%.1f\t",sum[r][c]) ;
		}
		printf("\n");
	}
	return 0 ;
}
