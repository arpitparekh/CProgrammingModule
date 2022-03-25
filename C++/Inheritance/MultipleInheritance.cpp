#include<iostream>

// multiple inheritance

using namespace std;

class A{
	public:
		void display(){
			cout<<"Class A method"<<endl;
		}
};
class B{
	public:
		void display(){
			cout<<"Class B method"<<endl;
		}
};
class Co : public A, public B{
	
};

int main(){
	
	Co a;
	a.display();
}
