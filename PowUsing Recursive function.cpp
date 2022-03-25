#include<stdio.h>
#include<math.h>

void findPower(int x,int y){
	
	// int x =5 // int y =5
	
	int total;
	
	total = x * pow(x,findPower(x,(y-1)));
	
	printf("%d",total);
	
	
	
}

main(){
	
	findPower(5,5);
	
}
