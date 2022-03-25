#include<stdio.h>
#include<math.h>

int findPower(int i,int j){
	
	if(j>=1){
		
		return i*pow(i,j-1);
	}
	
	return 1;
	
	
}


main(){
	
	int n,p;
	printf("Enter Number to find its power \n");
	scanf("%d",&n);
	printf("Enter Power \n");
	scanf("%d",&p);
	
	printf("%d",findPower(n,p));
}
