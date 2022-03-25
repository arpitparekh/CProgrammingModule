#include<stdio.h>

void findReverse(int x){
	
	int last_digit;
	
	int rev = 0;
	// int x = 0  //  5 // 
	
	while(x>0){
		
		last_digit = x%10;   // 5 // 0 // 9 // 3  // 8 // 6
		
//		printf("%d",last_digit);   patia // jugad

		rev = rev*10 + last_digit;    // 5 // 50 // 509 // 5093 // 50938 // 509386
	
		x=x/10;
		 
	}
	
	printf("%d",rev);
	
	 
	
	
	
}

main(){
	
	findReverse(683905);
	
	
}
