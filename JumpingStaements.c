#include<stdio.h>


main(){
	
	int x;
	
	for(x=20;x<=50;x++){
		
		if(x==30){
			
			continue;   // skips the itteration
		}
		
		printf("%d ",x);
	}
	
	////////////////////////////////////////////////////////////
	
	for(x=20;x<=50;x++){
		
		if(x==30){
			
			break;
			
		}
		
		printf("%d ",x);
	}
}
