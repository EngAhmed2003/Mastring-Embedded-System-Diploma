#include <stdio.h>
struct SStudent_Info{
	char name[50];
	int roll;
	float marks;
};
struct SStudent_Info Read_Info();

void Print_Info(struct SStudent_Info Info);

int main(){
	struct SStudent_Info Info;
	struct SStudent_Info Data[10];
	int Num_of_Student = 10 ,i;
	for(i=0;i<=Num_of_Student;i++){
		printf("Enter the Information of Student Number : %d\n",i+1);
		Info = Read_Info();
		Data[i] = Info;
	}
	printf("The Information of Students : \n");
	for(i=0;i<Num_of_Student;i++){
		Print_Info(Data[i]);
	}
	return 0;
}
struct SStudent_Info Read_Info(){
	struct SStudent_Info Info;
	printf("\nEnter the Student Name : ");
	fflush(stdin); fflush(stdout);
	scanf("%[^\n]%*c",&Info.name);
	printf("\nEnter Student Roll : ") ;
	fflush(stdin); fflush(stdout);
	scanf("%d",&Info.roll);
	printf("\nEnter the Student Marks : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&Info.marks); printf("\n");
	return Info;
}
void Print_Info(struct SStudent_Info Info){
	printf("\nThe Student Information : \n");
	printf("\nThe Student Name is : %s\n",Info.name);
	printf("\nThe Student Roll is : %d\n",Info.roll);
	printf("\nThe Student Marks is : %.2f",Info.marks);
}
