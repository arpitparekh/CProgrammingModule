// file handling


#include<stdio.h>
#include<stdlib.h>

main(){
	
	// C:\cProgramming

	// file mode // w  //  r  //  a
		
	FILE *ptr;
	
	char data[20];
		
	ptr = fopen("C:\\cProgramming\\hello.txt","a"); //     C:\\cProgramming\\hello.txt
	
	
	printf("Enter Something \n");
	
	gets(data);
	
	fprintf(ptr,"%s",data) ;   // write data into file
	
	fclose(ptr);
	
	printf("Data Write SuccessFully");
	
	
	
}
