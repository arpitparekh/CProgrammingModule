#include<stdio.h>

main(){
	
	int i,j,k;
	
	for(i=1;i<=5;i++){  // i=2
		
		for(j=1;j<=i;j++){
			
			printf("*");
		}
		
		for(k=1; k <=(10-2*i) ; k++ ){   // i = 1 => 8 // i = 2 > 6 // i = 3  => 4// i = 4 => 2
			
			printf(" ");
			
		}
		for(j=1;j<=i;j++){
			
			printf("*");
		}
		
		printf("\n");
	}
	
}
