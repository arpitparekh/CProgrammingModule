#include<stdio.h>

void findFibo(int x){
	// int x = p;
	// 1 1 2 3 5
	// a b c 
	int a,b,c,i;
	
	a=1;
	b=1;
	             
	for(i=0;i<x;i++){ // i =4 // a =8 // b =13 // c= 13
	
		printf("%d ",a); // 1	// 1 // 2 // 3 // 5
		c=a+b;
		a=b;
		b=c;
	}
	
}

main(){
	
	// fibonacci series
	
	// 1 1 2 3 5 8 13 
	// / / a b c
	
	
	int p;
	
	printf(" \n Enter Number to find Fibonacci series \n");
	scanf("%d",&p);
	
	findFibo(p);
	

	
	
}
