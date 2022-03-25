#include<stdio.h>

main(){
	
	int i,j,k;
	
	for(i=1;i<=5;i++){   //  i = 1 , 2 , 3
	
		for(k=4;k>=i;k--){  // 4 // 3 // 2
			
			printf(" ");  
		}
		
		for(j=1 ; j<=i ; j++) {  // 1 // 2 // 3
			
			printf("*");
			
		}
		printf("\n");
	}
}
