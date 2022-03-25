#include<stdio.h>

findNP(int x){  // x =34  // x = -2
	
	// x = -66 ;

	if(x<0){
		
		printf("number is negative \n");
		
	}else if(x==0){
		
		printf("Number is Zero \n");
	}else{
		
		printf("Number is Positive \n");
	}
}

main(){
	
	findNP(-2);

	
	findNP(34);
	
	findNP(-66);
	
	findNP(0);
}
