#include<stdio.h>

main(){
	
	int i,n;   // 4
	int c = 10;
	int result = 1;
	printf("Enter number \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		result = result*c;  // 10 // 100 // 1000 / 10000
		
	}
	
	printf("result is %d",result);
	
}
