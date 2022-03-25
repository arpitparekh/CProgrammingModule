#include<stdio.h>
main(){
	
	int arr[]={12,45,88,65,100,78,89,90,32,11,1,2,3,4,5,101};
	
	int i,max=0;
	for(i=0;i<16;i++){
		
		if(max<arr[i]){
			
			max=arr[i];  // 12
		}
		
	}
	
	printf("Max value is %d",max);
	
}
