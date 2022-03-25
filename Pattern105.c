#include<stdio.h>

main(){
	
	int i,j,k;
	
	for(i=1;i<=5;i++){
		
		for(j=4;j>=i;j--){
			
			printf(" ");
		}
		
		for(k=1;k<=i;k++){
			
			printf("* ");
			
		}
		printf("\n");
	}
	
	for(i=1;i<=4;i++){  // 1  // 2
		
		for(j=1;j<=i;j++){
			
			printf(" ");
		}
		
		for(k=4;k>=i;k--){
			
			printf("* ");
		}
		
		printf("\n");
		
	}
	
}
