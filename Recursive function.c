#include<stdio.h>

void display(){
	
	printf("This is display function");
	display();
}

main(){
	
	// recursive function
	
	// function calls it self
	
	display();
	
}
