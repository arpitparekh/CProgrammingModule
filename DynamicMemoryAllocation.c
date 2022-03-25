#include<stdio.h>
#include<stdlib.h>

main(){
	
	// dynamic memory allocation
	
	int *ptr,i,n,m;
	
	// malloc // calloc // realloc  // free
	
	// malloc does not initialize the value
	
	printf("Enter No Spaces to Reserve : \n\n");
	
	scanf("%d",&n);
	
	printf("\n");
	
//	ptr = (int*)malloc(n*sizeof(int));

	jump : ;
	
	ptr = (int*)calloc(n,sizeof(int));   // calloc initialize the location values
	
	
	//////////////////////// print empty memory address//////////////////////////
	
	
	
	printf("Allocated Memory is : \n\n");
	
	for(i=0;i<n;i++){
		
		printf("\t %p \n",ptr+i); /// pointer increment
	}
	printf("\n");
	
	/////////////////////////////////////////////////////////////
	
	printf("Values in those addresses are : \n\n");
	
	for(i=0;i<n;i++){
		
		printf("\t your add. is %p and the value is %d \n", ptr+i , *(ptr+i));
		
	}
	
	printf("\n");
	
	//////////////////////////////////////////////////////////////////
	
	printf("Enter Vales in Allocated Memory is : \n\n");
	
	for(i=0;i<n;i++){
		
		scanf("%d",ptr+i);	
	}
	
	printf("\n");
	
	///////////////////////////////////////////////////////////
	
	printf("New Values in those addresses are : \n\n");
	
	for(i=0;i<n;i++){
		
		printf("\t your add. is %p and the value is %d \n",ptr+i , *(ptr+i));
		
	}
	printf("\n");
	
	////////////////////////////////////////   realloc  ////////////////////////////////
	
	
	printf("Enter new Size for Reallocation");
	
	printf("\n");
	
	scanf("%d",&m);  // 3
	
	
	ptr = realloc(ptr,m*sizeof(int));  // resize allocatted momory space
	
	printf("\n");
	
	/////////////////////////////////////////////////
	
	printf("New Allocated Memory is : \n\n");
	
	for(i=0;i<m;i++){
		
		printf("\t %p \n",ptr+i); /// pointer increment
	}
	printf("\n");
	
	///////////////////////////////////////////////////////////////
	
	printf("Values in those new  addresses are : \n\n");
	
	for(i=0;i<m;i++){
		
		printf("\t your add. is %p and the value is %d \n", ptr+i , *(ptr+i));
		
	}
	
	printf("\n");
	
	///////////////////////////////////////////////////////////////////////////
	
	printf("Enter Vales in new Allocated Memory is : \n\n");
	
	for(i=n;i<m;i++){
		
		scanf("%d",ptr+i);	
	}
	
	printf("\n");
	
	//////////////////////////////////////////////////////////////////////////////
	
	printf("Values in those addresses are : \n\n");
	
	for(i=0;i<m;i++){
		
		printf("\t your add. is %p and the value is %d \n", ptr+i , *(ptr+i));
		
	}
	
	printf("\n");
	
	/////////////////////////////  free()  ////////////////////////////////
	
	jo: ;
	
	printf("Press 'f' to free \n prsss '0' to exit\n write 'j' to start again \n");
	
	char ch;
	
	printf("\n");
	
	scanf(" %c",&ch);
	
	if(ch=='f'){
		
		free(ptr);
		
		printf("\n");
	
		printf("Values in those addresses after free are : \n\n");
		
			printf("\n");
	
		for(i=0;i<m;i++){
		
			printf("\t your add. is %p and the value is %d \n", ptr+i , *(ptr+i));
		}
		
	}else if(ch=='0'){
		
		exit(0);
		
	}else if(ch=='j'){
		
		n=m;
		goto jump;
		
	}else{
		
		printf("Please Choose valid thing : \n");
		
		goto jo;
	}
	
}
