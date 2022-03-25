#include<stdio.h>
#include<stdlib.h>

main(){
	
	// dynamic memory allocation
	
	// we want to reserve memory in 
	// ram
	
	// malloc
	
	int *p,k;
	
	printf("Enter Size to reserve \n");
	
	scanf("%d",&k);  // 5
	
	 p = (int*)malloc(k*sizeof(int));
	 
	 // malloc returns null pointer  // 
	 
	 printf("\nReserved Memory is \n\n");
	 
	 int i;
	 
	 for(i=0;i<k;i++){
	 	
	 	printf("%p\n",p+i);
	 }
	
	printf("\nValue inside those addresses are \n\n");
	  
	for(i=0;i<k;i++){
	 	
	 	printf("%d\n",*(p+i));
	 	
	 }
	 
	printf("\nEnter Values inside those addresses are \n\n");
	 
	 for(i=0;i<k;i++){
	 	
	 	scanf("%d",p+i);
	 	
	 }
	 
	printf("\nYour Value inside those addresses are \n\n");
	  
	for(i=0;i<k;i++){
	 	
	 	printf("%d\n",*(p+i));
	 		
	 }
	 
	 // realloc   // re-allocation   //  to old memory
	 
	 printf("\nEnter New Size\n");
	 int l;                         // k = 5   // 7
	 scanf("%d",&l);
	 
	 printf("\nthose new  addresses are \n\n");
	 
	 for(i=k;i<l;i++){ 
	 	
	 	printf("%p\n",p+i);
	 	
	 }
	 
	 printf("\nEnter Values inside those new  addresses \n\n");
	 
	 for(i=k;i<l;i++){ 
	 	
	 	scanf("%d",p+i);
	 	
	 }
	 
	 printf("\nAll the Values are \n\n");
	 
	 for(i=0;i<l;i++){
	 	printf("%d\n",*(p+i));
	 }
	
}
