#include<stdio.h>

main(){
	
	////////////////////////////////  multi dimentional array  ////////////////////////
	
	int arr[2][3]={{1,2,3},
				   {4,5,6}};
				   
	int i,j;
	
	for(i=0;i<2;i++){      // i=0; i=1;
		
		for(j=0;j<3;j++){   // j = 2
			
			printf("%d",arr[i][j]);
			
		}
		printf("\n");
		
	}
	
	
	///////////////////////////////////////////////////////////////////////////////////////
	
	
	int darr[3][3]; // declare
	
	printf("---------------Enter Value in 2d Array---------------\n");
	
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			scanf("%d",&darr[i][j]);
		}
	
	}
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			printf("[%d] [%d] = %d \n",i,j,darr[i][j]);
		}
	}
	
	printf("%d",darr[1][1]);
	
	
	
	
}
