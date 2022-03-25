#include<stdio.h>
#define PI 3.14

main(){
	
	// operators in c
	
	// arithmatic operator
	
	// + - / * %
	
	float x =23;
	
	float y =45;
	
	float z = x/y ;
	
	printf("%f \n",z);
	
	// % operator
	
	int a =4;
	
	int b =6;
	
	int c = b%a;  // 4%6  // 2%100  // module gives reminder
	
	printf("%d \n",c);
	
	////////////////////////////////////////
	
	// relational operator
	
	// < > <= >= == !=  // relational operator gives me value of (0 = false) and (1 = true)
	
	int f = 12>23;
	
	printf("%d \n",f);
	
	int n = 12 <= 12;
	printf("%d \n",n);
	
	int e = 12 != 12;
	printf("%d \n",e);
	
	///////////////////////////////////////////////////////////////////////////////////
	
	// assignment operator
	
	//   =   +=  -=  *=  /=   %=
	
	int m1 = 10;
	
	int n1 =20;
	
	n1 += m1 ;  //  n =  n+m ;
	
	printf("%d\n",n1);
	
	
	///////////////////////////////////
	
	int m2 = 90;
	
	int n2 = 0;
	
//	m2 %= n2;   // m2 = m2%n2;  // 100%50 ;
	
//	printf("%d \n ",m2);  // 0
	
	
	///////////////////////////////
	
	int q1 = 10;
	
	int q3 = 20;
	
	q1 *= q3;  // q1-q3
	
	printf("%d \n",q1);	
	
	
	////////////////////////////////////////////////////////
	
	// logical operators
	
	//      &&   ||
	
	int w1 = 12>34   &&   12>10 ; 
	
	
	/*
		1   1 = 1
		1   0 = 0
		0   1 = 0
		0   0 = 0
	*/
	
	printf("%d \n",w1);
	
	int y1 = 45==45 ||  45!=45 || 45<0  || 45>0;
	
	/*
		1  1 = 1
		1  0 = 1
		0  1 = 1
		0  0 = 0
		
	*/
	
	printf("%d\n",y1);
	
	
	////////////////////////////////////////////////////////
	
	//  bit shift operator
	
	//       <<   >>
	
	/////////////////////////////////////////////////////
	
	// ternary operator
	
	//    ?      :   
	
	////////////////////////////
	
	// increment // decrement
	
	
	// pre increment // post increment
	
	//    ++   --
	int v1 = 45;
	printf("%d \n",--v1);  // 44   
	printf("%d \n",v1--);  // 44
	printf("%d \n",v1);      // 43
	
	/////////////////////////////////////////////////////////////////
	
	const int go = 34;
	
	
	////////////////////////////////////////////////////////
	
	// sizeof()  // return size of datatype
	
	
	int h2 = 34;  // type   // 4 byte
	
	printf("%d \n",sizeof(h2));
	
	printf("%d \n",sizeof(double));
	
	
	///////////////////////////////////////////////////////////////////////
	
	char ch = 'c';
	
	printf("%d\n",ch);
	
	int r1 =99;
	
	printf("%c",r1);
	
	
	//////////////////////////////////////////////////////////////////////
	
}
