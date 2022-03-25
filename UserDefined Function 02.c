#include<stdio.h>

// function parameter

// the value that we give to function from outside its called parameter

goa(int x){  // int x = 677;
	
	printf("value that u give me is : %d \n",x);
	
}

main(){
	
	goa(56); // we can only give value during function call
	goa(13);
	goa(677);
	
}
