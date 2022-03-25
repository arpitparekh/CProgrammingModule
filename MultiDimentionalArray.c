#include<stdio.h>

main(){
	
	int arr[2][3];
	
	int i,j;
	
	for(i=0;i<2;i++){   // 0 , 1  // 3 // 3
		
		for(j=0;j<3;j++){
			
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<2;i++){   // 0 , 1  // 3 // 3
		
		for(j=0;j<3;j++){
			
			printf("[%d] ",arr[i][j]);
		}
	}
}
