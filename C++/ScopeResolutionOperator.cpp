#include<iostream>

using namespace std;

int x = 45;  // global variable

// scope resolution operator  //  ::

// static variable

void display()
{
	static int x = 66;
	x++;
	cout<<x<<endl;
		
}

int main(){

	int x =23;  // local variable
	
	cout<<::x<<endl;   // resolve global scope into local scope
	
	cout<<x<<endl;
	
	const int y =23;
	y++;
	cout<<y<<endl;
	
	display();
	display();
	display();
	
}
