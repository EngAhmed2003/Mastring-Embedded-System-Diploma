#include <stdio.h>
struct SData{
	int id;
	char name[20];
};
int main(){
    struct SData emp1 = {1001, "John"}, emp2 = {1002, "Alex"}, emp3 = {1003, "Tailor"};

    struct SData *arr[3];

    for (int i=0; i<3; i++){
    	if(i==0)
    		arr[i]= &emp1;
    	else if(i==1)
    		arr[i]= &emp2;
    	else if(i==2)
    		arr[i]= &emp3;
    }

	struct SData **p;
	p=arr;

    printf("Employee Name : %s\n", p[1]->name);
    printf("Employee ID   : %d\n", p[1]->id);
	return 0;
}
