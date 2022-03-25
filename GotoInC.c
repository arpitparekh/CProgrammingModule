#include<stdio.h>
#include<stdlib.h>

main(){
	
	// goto 
	
	hi:   ;
	
	int x;
	
	printf("Enter Number \n");
	
	scanf("%d",&x);
	
	if(x==0){
		
		exit(0);  // shuts down the program
	}
	
	printf("%d\n",x);
	
	goto hi;
	
	
}

