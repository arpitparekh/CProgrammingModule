#include<iostream>

using namespace std;

class Student{
	
	public:
	
	// method overloading
	// method name should be same
	// parameter must be different
	// parameter type must be different
	// parameter order must be different
	
	void display(float  f,int x){
		
	}
	
	void display(int x,float f){
		
		
	}
	void display(){
		
	}
	void display(int x){
		
	}
	
	void display(float f){
		
	}
	void display(char name[]){
		
		
	}
	
};

int main(){
	
	// Polymorphism
	// poly  ... morphism
	
	// many  .. form
	
	// 2 ways to achive poly morphism in c++
	
	// method overloding
	// operator overloading
	
	Student s;
	
	s.display(12.34,2);
	
}

