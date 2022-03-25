#include<stdio.h>

main(){
	
	printf("Enter the size of 2d array \n");
	
	int m,n,i,j;
	
	scanf("%d%d",&m,&n);
	
	int harr[m][n];
	
	printf("Now enter %d values \n",m*n);
	
	for(i=0;i<m;i++){
		
		for(j=0;j<n;j++){
			
			scanf("%d",&harr[i][j]);
		}
	}
	printf("2d array is \n\n");
	
	for(i=0;i<m;i++){
		
		for(j=0;j<n;j++){
			
			if(harr[i][j]<10){
				printf("0%d ",harr[i][j]);
			}else{
				printf("%d ",harr[i][j]);
			}
			
		}
		printf("\n");
	}
	
	
	
	
}
