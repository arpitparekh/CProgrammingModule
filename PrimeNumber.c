#include<stdio.h>

void checkPrime(int x){
	
	// int x = 12;
	
	int i;
	
	char ch = 'y';

	
	for(i=2;i<x;i++){
		
		if(x%i==0){   // not prime
			
			ch = 'n';
			break;	
		}
	}
	if(ch=='y'){
		printf("Prime");
	}else{
		printf("Not prime");
	}
	
	
}

main(){
	
	// prime number //  2 // 3 // 5 // 7 // 11 // 13 // 17 // 19 // 23 // 29 // 31
	
	checkPrime(12);
	

	
	
}
