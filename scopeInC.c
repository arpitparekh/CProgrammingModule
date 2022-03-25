#include<stdio.h>
#define X 3.14

int y = 23; // global variable

void display(){
	printf("%d",y);
}

int main(){
	
	int x =23;  // local variable
	y=34;
	display();

}
