#include<stdio.h>

main(){
	
	int n,i,v,h;
	printf("Enter size of array \n");   // 5
	scanf("%d",&n);     // 5
	
	int arr[n]; // array declaration  // 0,1,2,3,4
	
	printf("enter elements in array -> \n\n");              // 1,2,3,4,5,6
	
	for(i=0;i<n;i++){
		
		scanf("%d",&v);
		
		arr[i]=v;
	}
	
	printf("Your array is -> \n\n");
	
	for(i=0;i<n;i++){
		
		printf("%d ",arr[i]);
	}
	
	////////////////////////////////////////////////////////////////////
	
	printf("\n Enter location to find value \n\n");
	scanf("%d",&h);
	
	if(h<n){
		
		printf("%d",arr[h]);
		
	}else{
		printf("Thik se likh bhai");
	}
	
	
	
	
	
	
	
	
	
}
