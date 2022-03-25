#include<stdio.h>
#include<stdlib.h>

main(){
	
	// dynamic memory allocation // to pre-reserver memory
	
	// malloc()  // calloc()  // realloc  //  free()
	int n;
	printf("Enter size to be allocated\n\n");
	scanf("%d",&n);
	
	int *p, i;
	
//	p = (int*)malloc(n * sizeof(int));
	
	p = (int*)calloc(n,sizeof(int));
	
	printf("\n\nLocation of those memory addresses are : -> \n\n");
	
	for(i=0;i<n;i++){
		
		printf("%p\n",p+i);
		
	}
	
	printf("\n\nValues in those memory addresses are : -> \n\n");
	
	for(i=0;i<n;i++){
		
		printf("%d\n",*(p+i));
		
	}
	
	printf("\n\nEnter Values in those memory addresses are : -> \n\n");
	
	for(i=0;i<n;i++){
		
		scanf("%d",p+i);
		
	}
	
	printf("\n\nValues in those memory addresses are : -> \n\n");
	
	for(i=0;i<n;i++){
		
		printf("%d\n",*(p+i));
		
	}
	
	printf("\nEnter New Size \n\n");
	
	int m;
	
	scanf("%d",&m);
	
	p = (int*)realloc(p,m*sizeof(int));
	
	printf("\n\nLocation of those new  memory addresses are : -> \n\n");
	
	for(i=n;i<m;i++){
		
		printf("%p\n",p+i);
		
	}
	
	printf("\n\nValues in those memory addresses are : -> \n\n");
	
	for(i=n;i<m;i++){
		
		printf("%d\n",*(p+i));
		
	}
	
	printf("\n\nEnter Values in those memory addresses are : -> \n\n");
	
	for(i=n;i<m;i++){
		
		scanf("%d",p+i);
		
	}
	
	printf("\n\nValues in those memory addresses are : -> \n\n");
	
	for(i=0;i<m;i++){
		
		printf("%d\n",*(p+i));
		
	}
	
	free(p);
	
	printf("\n\nValues in those memory addresses are : -> \n\n");
	
	for(i=0;i<m;i++){
		
		printf("%d\n",*(p+i));
		
	}
	
	
	

	
	
	
}
