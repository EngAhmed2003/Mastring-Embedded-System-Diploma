#include <stdio.h>
#include <math.h>
struct SComplex{
	float real1;
	float imagine1;
	float real2;
	float imagine2;
};
struct SComplex Read_Info();

void Printf_Info(struct SComplex Info);

int main(){
	struct SComplex Info;
	Info = Read_Info();
	Printf_Info(Info);
}
struct SComplex Read_Info(){
	struct SComplex Info;
	printf("For First Complex Number\n");
	printf("Enter Real and Imaginary Respectively : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&Info.real1,&Info.imagine1);

	printf("\nFor Second Complex Number\n");
	printf("Enter Real and Imaginary Respectively : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&Info.real2,&Info.imagine2);

	return Info;
}
void Printf_Info(struct SComplex Info){
	float real = Info.real1+Info.real2;
	float imagine = Info.imagine1+Info.imagine2;
	printf("\nThe Sum is : %.1f + %.1fi",real,imagine);
}