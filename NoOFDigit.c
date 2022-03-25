#include<stdio.h>


void findDigit(int x){
	
	// int x = 1333 ;
		
		int h = 0;
		
	 while(x>0){    // 1333  // 133 // 13 // 1  // 0
	 	
	 	
	 	x = x/10;  
	 	
	 	h++;
	 	
	 }
	 
	 printf("no of digit is %d",h);	
	 
	 	
	 
	
	
}

main(){
	
	// no of digit
	
	// 1200
	
	findDigit(1111111111);
	
}
