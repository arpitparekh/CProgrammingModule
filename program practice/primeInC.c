#include<stdio.h>

main(){
	
	// prime number
	
	// 2 3 5 7 11 13 17
	
//	int i;
//	
//	for(i=0;i<10;i++){
//		
//		if(i==5){
//			
////			continue;    // skip the itteration
//			break;       // skip the loop
//		}
//		printf("%d \n",i);

		// 23  // 2..22
//	}
		
		// 24   // 2..23

	// check whether the number is prime or not
	
	int n,i;
	printf("Enter NUmber : \n");
	scanf("%d",&n);
	
	int value = 0;
	
	for(i=2;i<n-1;i++){
		
		if(n%i==0){
			 value = 1 ;     // value becomes 1 if number is not prime
			 break;
		}
	}
	if(value==1){
		
		printf("\nNumber is not a prime");
	}else{
		
		printf("\nNumber is prime");
	}
	
	
	
	
}
