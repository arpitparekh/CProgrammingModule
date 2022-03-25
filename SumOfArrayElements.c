#include<stdio.h>

main(){
	
	//  1,2,3,4,5,6
	
	int n,i,v;
	
	int sum=0;
	
	printf("Enter size \n");
	
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the element of the array \n\n");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&v);      // 1 2 3 4 5
		 
		arr[i]=v;
	}
	
	//////////////////////////////////////
	
	for(i=0;i<n;i++){
		
		sum=sum+arr[i];  // 
	}
	printf("Sum of all the elements is %d",sum);
	
}
