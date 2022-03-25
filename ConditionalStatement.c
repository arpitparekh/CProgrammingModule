#include<stdio.h>

main(){
	
	// conditional statements
	
	// if
	
	// if..else
	
	// if    else if      else
	
	//nested if..else
	
	// switch
	
	int x =10;
	
	if(x>23){    // block will run only when if condition is true
		
		printf("This is if block \n");
	}
	else{
	
		printf("This is else block \n");
		
	}
	
	/////////////////////////
	
	printf("This is code ... \n \n");
	
	//////////////////////////////////////////////////////////////////
	
	int x1 = 23;
	
	if(x1<23){
		
		printf(" This is if block\n");
		
	}else if(x1 == 23){
		
		printf(" This is first else if\n");
	}
	else if(x1 <= 23){
		
		printf(" This is second else if \n");
	}	
	
	///////////////////////////// nested if else   ladder if else  /////////////////////////////////////
	
	int f =50 ;
	
	if(f<10){
		printf("This is outer if");
		
	}else{
		
		if(f>20){
			
			if(f>30){
				
				printf("This is inner inner if");
				
			}else{
				
				printf("This inner inner else");
			}
		}else{
			
			printf("This is inner else");
		}
	}
	
	///////////////////////////////////////////////////////////////////////////////
	
	
	
	
	
	
}
