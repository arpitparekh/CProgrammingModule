#include<iostream>

using namespace std;

class Goa{
	
	public:
		
		// rules of method overloading
		// same class
		// function name should be same
		// parameter must me different
		// no parameter must be different
		// type of parameter must be different
	
	Goa(){
		
	}
	Goa(int x){
		
	}
	
//	void party(){
//		
//	}
	int party(int x){
		
	}
	void party(float f,int x){
		
	}
	void party(int x,float f){
		
	}
	virtual void party()=0;
};

class Panji : public Goa{
	
	void party(){
		cout<<"Overloaded method from parent class"<<endl;
	}
};

int main(){
	
	// poly // morphism
	
	// many //  forms
	
	// more than one form
	
	// method overloading
	
//	Goa g;
	
	Panji p;
	
}
