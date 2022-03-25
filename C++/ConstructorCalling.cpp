#include<iostream>

using namespace std;

class A{
	
	protected:
		int x,y;
	
	public:
	A(int x,int y){
		this->x=x;
		this->y=y;
	}
	
	void print(){
		
		cout<<x<<endl;
		cout<<y<<endl;
	}
};

class B : public A{
	
	protected:
		int a,b,c;
	
	public:
	B(int a,int b,int c) : A(a,b){
		this->a=a;
		this->b=b;
		this->c=c;
		
	}
	
	void display(){
		
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
		
	}
	
};

int main(){
	
	B b(11,12,13);
	
	b.print();
	b.display();
	
	
}
