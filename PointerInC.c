#include<stdio.h>

main(){
	
	
	// pointers
	
	// pointer holds the memory address
	
	int x=23;
	
	int *p;   // define a pointer
	
	
	// & is address operator
	
	p = &x;
	
	printf("%p \n",p);
	printf("%p \n",&x);
	
	printf("%d \n",x);
	printf("%d \n",*p);   // *  addresss resolution operator
	
	printf("%p\n", &p);
	
	printf("%p\n", &(*p));
	
	//   p =  &(*p)
	
	printf("%p \n",  *(&p)   )  ;
	
	printf("%p \n",  &(*(&x))  );
	
	
	//   *(&(*(&(*(&x)))))   =   *(&p)
	
	printf("%d\n" , *(&(*(&(*(&x))))) );
	
	
	
	
	
	
	
	
	
	
}
