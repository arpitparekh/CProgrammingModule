// Constructor Chaining

#include<iostream>

using namespace std;

class GrandParent{
	
	public:
	
	GrandParent(){
		
		cout<<"This is GrandParent Constructor"<<endl;
	}
};

class Parent : public GrandParent{
	
	public:
	
	Parent(){
		
		cout<<"This is Parent Class Constructor"<<endl;
	}
	
};

class Child : public Parent{
	
	public:
	
	Child(){
		
		cout<<"This is Child class Constructor";
	}
	
};

int main(){
	
	Child c;
	
}
