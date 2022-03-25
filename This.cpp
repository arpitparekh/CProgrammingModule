#include<iostream>


using namespace std;

class Demo{
	
	public:
	
	int a;
	float f;
	
	Demo(int a,float f){
		
		this->a=a;               // this refers to the current class object
		this->f=f;
		
	}
	
	void print(){
		
		cout<<a<<"\n"<<f;
	}
	
};

int main(){
	
	Demo d(12,56.78);
	
	d.print();
	
}
