#include<iostream>

using namespace std;

class Study{
	
	public:
		
	int x;
	
	// constructor
	// is type of method/function
	// name of the constructor is same as class name
	// constrcutor does not have any return type 
	
	// constrcutor creates an object an assign memory assign
	
	Study(){   // defualt constrcutor
		
		cout<<"This is constructor"<<endl;
	}
	Study(int x){   // parameterized constructor
		
		cout<<x<<endl;
	}
	
	// destructor
	// release object from memory  // there is no parameter in destrcutor
	
	~Study(){
		
		cout<<"this is destructor"<<endl;	
	}	
};

int main(){
	
	Study s(34);   // constructor calls automatically when we create object
	cout<<"body"<<endl;
	
}
