#include<stdio.h>

void printNumber(int x){
	
	if(x>0){
		printf("%d \n",x);
	
		printNumber(x-1);	
	}	
	
}

main(){
	
	int number = 15;
	printNumber(number);
}
