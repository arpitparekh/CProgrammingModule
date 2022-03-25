#include<iostream>

using namespace std;


class A{
	
	protected:
	
	int x;  // 15
	int y;  // 26
	
	A(){
		
	}
	
	public:
	A(int x,int y){
		cout<<"A"<<endl;
		this->x=x;
		this->y=y;
		
		cout<<this->x<<endl;
		cout<<this->y<<endl;
	}
	
};

class B : public A{
	
	protected:
	
	int p; // 12
	int q;  // 13
 
	
	B(){
		
	}
	
	public:
		
	B(int p,int q){
	
		
		A(p,q);        // benifits of constructor chaining
		
		this->p=p;
		this->q=q;
		
		cout<<this->p<<endl;
		cout<<this->q<<endl;

	}
};

class C : public B{
	
	public:
	C(){
		
		B(10,20);
	}
	
	
};

int main(){
	
	C c;

	
}
