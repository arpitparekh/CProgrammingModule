#include<stdio.h>

int findPower(int x,int y){
	
	// int x =5 // int y =5
	

	
//	total = x * ;
	if(y>0){
		return x * findPower(x,y-1);   // 5 * pow(5*f(5*4))
	}
	
	return 1;
	
	
	
	
	
	
}

main(){
	
	int z =findPower(5,5);
	printf("%d",z);	
}
