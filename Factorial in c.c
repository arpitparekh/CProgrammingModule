#include<stdio.h>

// factorial  // 5*4*3*2*1  // 4*3*2*1 // 3*2*1

// prime number  // 2 3 5 7 11 13 17 19 23 29 31 37 43

void findFacto(int x){   	// function declaration
	
	// int x =5;
	
	int i,result = 1;
	
	
	for(i=1;i< = x;i++){ // 1 2 3 4 5  // result ->  1 // 2 // 6 // 24 // 120
		
		result = result * i ; 
		
	}
	
	printf("Result is :->  %d ",result);
	
}

main(){
	
	findFacto(10); // function call
	
}
