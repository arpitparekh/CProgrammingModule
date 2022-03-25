#include<stdio.h>

main(){
	
	int i,j;
	printf("Enter two numbers \n");
	
	scanf("%d%d",&i,&j);
	
	if(i>j){
		
		printf(" i = %d is greater",i);
		
	}else if(i==j){
		
		printf("Both number is equal");
	}
	else{
		printf("j = %d is greater",j);	
	}
	
}
