#include<stdio.h>

main(){
	
	
	int i,j;
	
	for(i=1;i<=5;i++){  // 1  // 2 // 3  / 4 // 5
		
		for(j=1;j<=i;j++){  // 1   // *  // * * // * *  *  // *  * * * // 
			
			printf("*");
			
		}
		printf("\n");
	}
	
		for(i=4;i>=1;i--){  // i = 5 // 4
		
			for(j=1;j<=i;j++){ //  * * * * * // 
			
			printf("*");
			
		}
		printf("\n");
	}
}
