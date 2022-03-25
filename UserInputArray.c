#include<stdio.h>

main(){
	
	int n,i,e;
	printf("Enter the size of array \n");
	scanf("%d",&n);
	
	int arr[n];           // int arr[4];   // 12,45,678,354
	
	printf("Enter Values \n");   // 5
	
	for(i=0;i<n;i++){          // take input from user
		
		scanf("%d",&e);
		
		arr[i] = e;
		
	}
	
	printf("\n\nYour array is \n\n");
	
	for(i=0;i<n;i++){                 // print array
		
		printf("%d \n",arr[i]);
		
	}	
		
}
