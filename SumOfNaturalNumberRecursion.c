#include<stdio.h>

int sum(int x){  // 6

	// recursion is a functional loop
	if(x>0){
		
		return x * sum(x-1);   // 6+5+4+3+2+1;
	}
		return 1;
}


main(){
	
	printf("Enter Number\n");
	int i;
	scanf("%d",&i);	
	printf("%d",sum(i));
}
