#include<stdio.h>
#include<string.h>

main(){
	
	// string
	
	// string is a group of character
	// string is character array
	
	// "tops" // "Hello"  //  " " 
	
	// 't' , ''
	
//	char ch =' ';
//	
//	printf("%c",ch);

	int x =3;
	
	char number = '3';
	
	printf("%c",number);
	
	char name[] = "tops321" ;
	
	char name2[]= {'t','o','p','s'};
	
	printf("%s \n",name);
	printf("%s",name2);	
	
	///////////////////////////////////
	
	char data[50];
	
	printf("\nEnter Name \n");

	gets(data);
	
//	printf("%s",data);
	puts(data);              // print string
	
	/////////////////////////////////////  string function  /////
	
	// strlen()
	
	printf("No Of Character is -> %d \n",strlen(data));
	
	///////////////////////////////////////////////////////////////////
	
	char data2[50];
	
	strcpy(data2,data);
	
	puts(data2);
	
	
	///////////////////////////////////////////////////
	
	char address[20];
//	address = "adajan";                        *
//	address = {'a','d','a','a','n'};	

	strcpy(address,"adajan");
	
	puts(address);
	
	////////////////////////////////////////////////////////////////
	
	// strcat();  // concate
	
	strcat(data,address);
	
	puts(data);
	
	//////////////////////////////////////////////////////////
	
	
	//  strcmp();  // 
	
	char d1[20];
	char d2[20];
	
	gets(d1);
	gets(d2);
	
	printf("%d",strcmp(d1,d2));
	
	
	
	
	
	
	
	
	
}
