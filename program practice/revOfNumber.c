#include<stdio.h>

main(){
	
	int n,l;
	int rev=0;
	printf("Enter Number \n");
	
	scanf("%d",&n);  // 1234
	
	while(n!=0){
		
		l = n%10;   // 4   // 3   // 2   // 1
		rev = rev*10 + l;   // 4   // 43   // 432  // 4321
		n/=10;  // 123  // 12  // 1  // 0
	}
	
	printf("%d",rev);
}
