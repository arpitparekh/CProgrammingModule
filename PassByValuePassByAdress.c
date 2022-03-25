#include<stdio.h>

// there are two types of function  // pass by value // pass by address

int sum(int a,int b){  // pass by value
	
	return a+b;
}

int sumNew(int *a,int *b){   // pass by reference
	
	// a=&x // b = &y
	
	return  *a + *b ;	
}

main(){
	
	int x =23;
	int y =24;
	
	int *k,*l;
	
	k=&x;
	l=&y;
	
//	int z = sumNew(&x,&y);

	int z = sumNew(k,l);

	printf("%d",z);
}
