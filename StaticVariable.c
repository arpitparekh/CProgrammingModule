#include<stdio.h>

void display(){
	  
	static int z = 66 ;   // static variable holdes new value 
	z= 80 ;
	z= 20 ;
	z++ ;
	printf("%d \n",z);  // z = 21 , 68
	
}

main(){
	
	display();
	display();
	display();
	display();
	display();	
}
