#include<stdio.h>

main(){
	
	int i,j,k,n;
	
	printf("Enter Values \n");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++){
		
		for(j=n;j>=i;j--){   // 1  // 
			
			printf("*");
		}
		
		for(k=2;k<=(2*i-1);k++){  // 2 // 3
		
			printf(" ");
		}
		
		for(j=n;j>=i;j--){ // 
			
			printf("*");
		}
		printf("\n");
	}
	///////////////////////////////////////////////////////////////////////////////
	
	for(i=n;i>=1;i--){
		
		for(j=n;j>=i;j--){   // 1  // 
			
			printf("*");
		}
		
		for( k=1; k<=i*2-2 ;k++ ){  // 2 // 3
		
			printf(" ");
		}
		
		for(j=n;j>=i;j--){ // 
			
			printf("*");
		}
		printf("\n");
	}
}
