#include<stdio.h>

main(){
	
	// sizeof
	
	int x = 23 ;
	
	double d = 343434.343;
	
	printf("%d \n ",sizeof(d));   // return the memory sizeof variable
	
	int arr[]={1,2,3,4,5,6};
	
	// total memory size of arr is 24 byte 
	
	int length = sizeof(arr) / sizeof(int) ;
	
	printf("%d",length); 
	
	
	
}
