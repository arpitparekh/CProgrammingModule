#include<stdio.h>

main(){
	
	int math,gujarati,hindi,english,marathi,total;
	float percentage;
	
	printf("enter five sub marks \n");
	
	printf("enter the math,gujarati,hindi,english,marathi \n");
	scanf("%d%d%d%d%d",&math,&gujarati,&hindi,&english,&marathi);
	
    total = math+gujarati+hindi+english+marathi;
    percentage = total/5;
    
    printf("total marks %d \n",total);
    printf("percentage %.2f",percentage);
    
    if(percentage > 75){
    	printf("first class");
    	
	};
	if(percentage <= 75 && percentage > 60){
    		printf("secound class");
    		
			
		};
	if(percentage <=60 && percentage>50){
    			printf("pass class");
    			
			};
	if(percentage <=50){
		printf("Fail");
	}		
	
	
	
	
}


