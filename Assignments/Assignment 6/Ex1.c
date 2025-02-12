#include <stdio.h>
struct SStudent_Info{
	char name[40];
	int roll;
	float marks;
};
struct SStudent_Info Read_Info();

void Print_Info(struct SStudent_Info Info);

int main(){
	struct SStudent_Info Info;
	Info = Read_Info();
	Print_Info(Info);
	return 0;
}

struct SStudent_Info Read_Info(){
	struct SStudent_Info Info;
	printf("Enter the Student Information : \n");

	printf("\nEnter the Student Name : ");
	fflush(stdin); fflush(stdout);
	scanf("%[^\n]%*c",&Info.name);

	printf("\nEnter Student Roll : ") ;
	fflush(stdin); fflush(stdout);
	scanf("%d",&Info.roll);

	printf("\nEnter the Student Marks : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&Info.marks);
	return Info;
}
void Print_Info(struct SStudent_Info Info){
	printf("\nThe Student Information : \n");

	printf("\nThe Student Name is : %s\n",Info.name);

	printf("\nThe Student Roll is : %d\n",Info.roll);

	printf("\nThe Student Marks is : %.2f",Info.marks);
}
