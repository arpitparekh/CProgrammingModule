#include<stdio.h>

#define PI 3.14   // global constant

void main(){
	
	const int x = 23 ;  // local constant
	
	//  x = 34 ;
	
//	float r = 2.3 ;
	
//	printf("%f \n",PI*r*r); 
	
//	printf("%.2f",PI);
	
	// operators
	
	// arithmatic 
	
	//  +  -  /  *  %
	
	// assignment operator
	
	//  =  += -= /= %=
	
	int x1 = 50 ;   // 4 byte   // ram 
	
	int z =40;
	
	z %= x1;  // z = 40 % 50;
	
	printf("%d \n",z);
	
	// conditional operator
	
	// < > <= >=  ==  !=
	
	int x2 = 12<34;
	
	printf("%d \n",x2);
	
	// logical operator
	
	//     &&    ||
	
	int x3 = 12<34  ||  11<1 ;
	
	// 1   1  = 1
	// 0   1  = 0
	// 1   0  = 0
	// 0   0  = 0
	
	////////////////////////////////////////////////
	
	// 0 1 1 2 3 5 8 13
	
	// prime number  // 2 3 5 7 11 13 17 
	
	
	
	// 1  1 = 1
	// 1  0 = 1
	// 0  1  = 1
	// 0  0  = 0
	 
	
	// false = 0 / true =1
	
	
	// bit - shift operator
	
	//   <<  >>
	
	// 
	
	printf("%d \n",12>>5);   //0.01100
	
	// ternary operartor
	
	//    :   ? 
	
	
	int x4 = 77;
	
	x4<66 ? printf("Not valid \n") : printf("Valid\n") ; // ternary operator
	
	
	// escape sequences  
	
	printf("Hell\''o");
	
	printf("Students");
	
	
	
}
