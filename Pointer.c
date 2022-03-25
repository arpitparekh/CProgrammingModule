#include<stdio.h>

void sum(int x,int y){   // pass by value
	printf("%d\n",x+y);
}

void sum2(int *p,int *q){   // pass by reference // address
	
	printf("%d\n",( *p + *q ));
}

void sum3(int *f , int *g){
	
	printf("%d\n",( *f + *g ));
	
}

main(){
	
	int *p;
	
	int x =23;
	
	p = &x;
	
	
	printf("%p\n",p);
	
	sum(12,13);
	
	///////////////////////////
	int a =12;
	int b =13;
	
	sum2(&a,&b);
	
	///////////////////////////////
	
	int n = 11;
	int m = 12;
	
	int *l = &n;
	int *k = &m;
	
	sum3(l,k);
}
