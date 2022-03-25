#include<stdio.h>
#include<stdlib.h>
#define PI 3.14


main(){
	
	FILE *p;
	char data[30];
	
	p = fopen("C:\\cProgramming\\hello.txt","r");
	
//	fscanf(p,"%s",&data);    // read data from file	
	
	fread(&data,sizeof(data),1,p);
	
	printf("%s",data);
	
	fclose(p);
	
}
