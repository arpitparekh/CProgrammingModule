#include<stdio.h>

int d(int x){
	
	if(x>0){
		return x + d(x-1);
	}
		return 0;

								// d(5){5+d(4){4+d(3){3+d(2){2+d(1){1+d(0)}}}}}
	
}

int main(){
	
	int z;
	z=d(20);
	
	printf("%d",z);
	
	
}
