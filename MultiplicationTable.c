#include<stdio.h>

main(){
	
	hindi :  ;
	
	int x,n;
	
	printf("Enter Number to display table \n");
	
	scanf("%d",&n);
	
	for(x=1;x<=10;x++){
		
		printf("%d * %d = %d\n", n , x , n*x );
	}
	
	goto hindi;
	
	
	
}
