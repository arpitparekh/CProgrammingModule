#include<stdio.h>
#include<string.h>

// strcuture

// collection of datatype under single datatype name

//struct College{
//	
//	char deptName[20];
//};

struct Student{   // u can't initialize values in structure
	
	int roll;
	char name[20];
	float height;
//	struct College c;
	
	struct College{
	
	char deptName[20];

	}c;
	
}s;

main(){
	
//	Student s;
	
	strcpy(s.c.deptName,"science");
	s.roll = 34;
	strcpy(s.name,"tops");
	s.height = 45.56;
	
	printf("%d \n",s.roll);
	printf("%s \n",s.name);
	printf("%f \n",s.height);
	printf("%s \n",s.c.deptName);
	
	
	
}
