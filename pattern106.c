#include<stdio.h>

main(){
	
	
	int i,j,k,l;
	
	for(i=1;i<=6;i++){   // 1 // 2 // 3 //4 // 5
		
		for(j=6;j>=i;j--){  // 4 // 3 // 2
			
			printf("*  ");
		}
		for(k=1;k<=(2*i-1);k++){  // 1 // 3 // 5
		
			printf("   ");
		}
		for(l=6;l>=i;l--){  // 4 // 3 // 2
			
			printf("*  ");
		}
		printf("\n");
	}
}
