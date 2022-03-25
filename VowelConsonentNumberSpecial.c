// find vowel


// "topss1212 %^%^%% a e i o u"

// 12  // '2'


#include<stdio.h>


main(){
	
	int i;
	
	printf("Enter String \n");
	
	char data[20];
	
	
	gets(data);
	printf("Numbers are : \n");
	for(i=0;i<20;i++){
		
		if(data[i]<=57 && data[i]>=48){
			
			
			printf("%c ",data[i]);
			
		}
		
	}
	for(i=0;i<20;i++){
		
		if(data[i]=='a' || data[i]=='e' ||data[i]=='i' ||data[i]=='o' ||data[i]=='u'|| data[i]=='A' || data[i]=='E' ||data[i]=='I' ||data[i]=='O' ||data[i]=='U' ){
			
			
			printf("Vowel %c \n",data[i]);
			
		}else if(  (data[i]>=65 && data[i]<=90) || (data[i]>=97 && data[i]<=122)  ){
		
			printf("Consonant %c \n",data[i]);
		}else{
			
			printf("spacial chaaracter %c \n",data[i]);
			
		}
		
	}
	
	
}
