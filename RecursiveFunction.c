#include<stdio.h>

void fun(){
	
	printf("This is fun function");

	fun();
}

void print(int x){
	// int x =23;
	
	if(x>0){
		printf("%d ",x);
		print(x-1);
	}	
}

main(){
	
	// recursive 
	// when function calls it self 
	print(23);
	
}
