#include<stdio.h>

main(){
	
	int arr[2][3]={{1,2,3},{4,5,6}};
	
	
	int arr2[2][3];
	
	int i,j;
	
	for(i=0;i<2;i++){  // 0  // 1
		
		for(j=0;j<3;j++){  // 0  // 1 // 2   // 0 /1 /2
			
			printf("%d",arr[i][j]);
		}
		printf("\n");
		
	}
	
}
