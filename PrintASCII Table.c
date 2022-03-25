#include<stdio.h>

main(){
	
	int i,j,k;
	
	for(i=1;i<5;i++){
		
		for(j=4;j>=i;j--){
			
			printf(" ");
		}
		for(k =2 ;k<=(5*i-4);k++){
			
			printf("*");
			
		}
		printf("\n");
	}
	
}
