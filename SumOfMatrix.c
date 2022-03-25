#include<stdio.h>

main(){
	
	int arr1[2][3];
	
	int arr2[2][3];
	
	int i,j;
	
	printf("Enter Values For First Array \n");
	printf("--------------------------------\n\n");
	
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("\n\nEnter Values For Second Array \n");
	printf("--------------------------------\n\n");
	
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			
			scanf("%d",&arr2[i][j]);
		}
	}
	
	/////////////////////////////////////////////////
	
	printf("--------------------------------\n\n");
	printf("New Array is \n\n");
	
	for(i=0;i<2;i++){ // i = 0 // i =1
		
		for(j=0;j<3;j++){ // j = 0
			
//			arr3[i][j]=arr1[i][j]+arr2[i][j];
			
			printf("%d ",arr1[i][j]%arr2[i][j]);
		}
	}
	
	
//	for(i=0;i<2;i++){
//		
//		for(j=0;j<3;j++){
//			
//			printf("[%d]",arr3[i][j]);
//		}
//	}
	
	
	
	
	
}
