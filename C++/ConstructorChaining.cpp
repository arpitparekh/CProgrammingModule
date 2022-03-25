#include<iostream>

using namespace std;

class A{
	
	// properties
	
	// method
	
	// constructor
	
	public:
		
		A(){
			cout<<"This is class A Constructor "<<endl;
		}
	
	A(int x){
		cout<<"This is class A Constructor "<<x<<endl;
	}
};
class B : public  A{
	
	public:
		
		B(){
			cout<<"This is class B Constructor "<<endl;
		}
		
	B(int x){
		A(12);
		cout<<"This is class B Constructor "<<x<<endl;
	}
};

class C : public B{
	
	public:
		
	C(int x){
		
		A(12);
		B(12);
		cout<<"This is class C Constructor "<<x<<endl;
	}
};


int main(){
	
	
	// constructor chaining
	
	// child class constructor always class parent class constructor
	
	C c(12);
		
}
