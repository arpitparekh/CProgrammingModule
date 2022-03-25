#include<stdio.h>



main(){
	
	int arr[6],i;
	
	printf("{Enter values}\n");
	
	for(i=0;i<6;i++){
		scanf("%d",&arr[i]);
	}
	
	int *p;
	
	p = &arr[0];
	
	for(i=0;i<6;i++){
		
		printf("%d",*(p+i));
	}
	
	
}
