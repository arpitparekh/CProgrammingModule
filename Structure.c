#include<stdio.h>
#include<string.h>

struct Student{
	
		int x;
		float f;
		char name[20];
}s;


main(){
	
//	struct Student s;
	
	s.x =12;
	s.f = 34.45;
	
	char data[20];
	
	
	strcpy(s.name,"tops");   //  initialize string
	
	
	printf("%d\n",s.x);
	printf("%f\n",s.f);
	printf("%s\n",s.name);
	
	// structure
	
	// group of datatype under a single data type name
	
	// u can not initialize variable inside structure
	
}
