#include<iostream>

using namespace std;

class A{
	

	protected:
		int z;
		
		
				
};

class B : protected A{
	
	
	public:
		
		void assign(int a){
			this->z=a;
	
		}
	
	void print(){
		cout<<z;
	}
	
};

int main(){
	
	// access modifiers
	
	// public // private // protected
	
	B b;
	b.assign(12);
	b.print();
	
	
	
}
