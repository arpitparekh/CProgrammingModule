#include<iostream>
#define PI Py
#define Py 34;
#include<string.h>

using namespace std;

class A{  // static in class
	
	public:
	
	static int x;  // u can not initialize static variable in class
	float y;
	char name[20];
	
	void assign	(float y,char name[]){
		
		this->y=y;
		strcpy(this->name,name);
		
	}
	
	void display(){
		
		cout<<x<<endl;
		cout<<y<<endl;
		puts(name);
	}
	
};

int A::x=23;

//void display(){
//	
//	static int x =10; // 11 // 12
//	
//	x++;
//	
//	cout<<x<<endl;
//		
//}

int main(){
	
//	const c = 34;
//	
//	display();
//	display();
//	display();
//	display();

	A a;
	a.assign(12.34,"smit");
	a.display();
	
	A a2;
	a2.assign(56.74,"jigar");
	a2.display();
	
	a.x = 45;
	
	cout<<a2.x<<endl;
	
	A::x=95;  // calling
	
		cout<<a2.x<<endl;
		cout<<a.x<<endl;

}
