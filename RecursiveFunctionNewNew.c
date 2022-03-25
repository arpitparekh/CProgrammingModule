#include<stdio.h>

// factorial   // 5*4*3*2*1

long long int findFacto(int x){
	if(x>0){
		return x * findFacto(x-1);
	}
	return 1;
	
}

main(){
	
	h: ;
	
	long long int i;
	printf("Enter Number \n");
	scanf("%lld",&i);
	printf("%lld \n",findFacto(i));
	
	goto h;
	
}
