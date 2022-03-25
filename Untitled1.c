#include<stdio.h>

int reverse = 0;

int findReverse(int x){
	 // int x =205;
	 
	 int last_digit;
	 
	 
	 if(x>0){
	 	last_digit = x%10;
	 	reverse = reverse*10 + last_digit ;
	 	findReverse(x/10);
	 }
	 else{
	 	printf("%d",reverse);
	 }
	  

	
}

main(){
	
	findReverse(2056);
	

}


