#include<stdio.h>


main(){
	
	int arr[5]={1,5,7,2,9};
	
	int i,m;
	m=arr[0];
	
	for(i=0;i<5;i++){
		
		m<arr[i] ? m=arr[i] : printf("");
			
	}
	
	printf("Max number is %d",m);
}
