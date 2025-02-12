#include <stdio.h>
struct SDistance_Info{
	int feet1;
	int feet2;
	float inch1;
	float inch2;
};
struct SDistance_Info Read_Info();

void Print_Info(struct SDistance_Info Info);

int main(){
	struct SDistance_Info Info;
	Info = Read_Info();
	Print_Info(Info);
	return 0;
}
struct SDistance_Info Read_Info(){
	struct SDistance_Info Info;

	printf("Enter Information for 1st Distance : \n");
	printf("Enter Feet : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Info.feet1);
	printf("Enter Inch : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&Info.inch1);

	printf("\nEnter Information for 2st Distance : \n");
	printf("Enter Feet : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Info.feet2);
	printf("Enter Inch : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&Info.inch2);

	return Info;
}
void Print_Info(struct SDistance_Info Info){
	float sum = Info.feet1+Info.feet2+Info.inch1*1/12+Info.inch2*1/12;
	printf("\nSum of distance = %.2f",sum);
}
