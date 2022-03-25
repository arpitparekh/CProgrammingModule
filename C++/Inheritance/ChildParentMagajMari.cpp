#include<iostream>

using namespace std;

class Parent{
	
	public:
	
	void display(){
		
		cout<<"Parent class Method"<<endl;
	}
	
};

class Child : public Parent{
	
	public:
	
	void display(){
		
		cout<<"Child class Method"<<endl;
	}
		
};

int main(){
	
	Child c;
	c.display();
}
