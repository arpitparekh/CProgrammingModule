#include<stdio.h>
#define PI 3.14          // micros  // pre-processor

#define HI PI

#define show(t) { \
	printf("%d",t); \
	printf("%d",(t*10)); \
}


main(){
	
	show(12);
	
}
