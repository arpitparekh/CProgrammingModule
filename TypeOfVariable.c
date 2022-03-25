// header

#include<stdio.h>

void display();

int x =23;  // global properties

main(){
	
 // 	int x =23;  // function properties  // local properties/\
	
	printf("%d\n",x);
	display();  // function call
}

void display(){
	
	printf("%d",x);
}

