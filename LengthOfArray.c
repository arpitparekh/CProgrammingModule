#include<stdio.h>

main(){
	int n,i,e;
	printf("Enter the size of array");
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		
		scanf("%d",&e);
		
		arr[i] = e;
		
	}  
	           
	// sizeof()
	int length = sizeof(arr)/sizeof(int);      // length of array
	
	printf("size of array is  -> %d",length);
}
