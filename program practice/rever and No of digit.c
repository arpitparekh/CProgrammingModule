#include<stdio.h>

main(){
	
	int n,k,l,mul=1,g,c=10;
	int size=0;
	int rev = 0;
	printf("Enter One Number\n");
	scanf("%d",&n);
	
	//    1234          % 10  = 4
	//   int = 1234    / 10  =  123  / 10   12   / 10    1    /10   0
	
	k=n;  // k =1234
	/////////////////////////////// no of digit ///////////////////////////////////
	
	
	while(n!=0){
		size++;   // 1
		n /= 10;   // n=n/10;
	}
	
	printf("No of digit is %d \n",size);
	
	size--;
	
	/////////////////////////////// reverse number  //////////////////////////
	// k =1234;  123 ; 12 ; 1
	
	// size = 3  // 2  // 1  // 0

	
	while(k!=0){
		
		l =  k % 10 ;  // 4  // 3 // 2  // 1
	
	if(size==0){
		size = 1 ;
		mul = 1;
		rev = rev + l*mul ;   
		
	}else{
		
		for(g=1;g<=size;g++){
			
			mul = mul *c ; // 1000   //  100  //  10
		}
		rev = rev + l*mul ;   // 4000 // 4300  // 4320  // 4321
		mul=1;
	
	}
	size--; 
	k=k/10;  
	}
	
	printf("Reverse of a number is %d",rev);
}
