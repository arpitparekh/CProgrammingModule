#include<stdio.h>

main(){
	
	int i,j;
	
	int number=65;
	
	for(i=1;i<=9;i++){
		
		for(j=1;j<=i;j++){   // A  65 - Z 90
			
			printf("%c  ",number);
			number++;
		}
		printf("\n");
	}
	
}
