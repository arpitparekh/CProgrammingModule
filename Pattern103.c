#include<stdio.h>

main(){
	
	int i,j;
	
	for(i=5;i>=1;i--){   //  i = 1 // 2  // 5
		
		for(j=1 ; j<=i ; j++) { 
			
			printf("* ");
			
		}
		printf("\n");
	}
	
}
