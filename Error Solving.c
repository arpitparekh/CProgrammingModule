#include<stdio.h>

struct G{
		
		int x;
		
	}g;

//void my()
//{
//	
//	
//	h.x = 23;
//		printf("%d",h.x);
//}

fun(struct G g);

main(){
	
	
	
	g.x = 23;
	
	fun(g);
}

fun(struct G g){
	
	printf(g.x);
}
