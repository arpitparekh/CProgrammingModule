#include<stdio.h>


main(){
	
	int i,j;
	for(i=1;i<=5;i++){ 
	
	/*
		11  12 13 14 15
		21  22 23 24 25
		31  32 33 34 35
		41  42 43 44 45
		51  52 53 54 55 
	
	*/
		
		for(j=1;j<=5;j++){  
			
			if(i==j || i+j==6){
				printf("*");	
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
