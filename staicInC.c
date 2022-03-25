#include<stdio.h>

void display();  // forward declaration of a function

main(){
	
  //	int x =23;  // local properties	
  
  display();  // x = 21
  display();
	
}

void display(){
	
	static int x =20;   // 32 keywords  // 51 keyword 
	
	x++;
	
	printf("%d \n",x);
}
