#include<iostream>

using namespace std;

class Data{
	
	public:
	
	int x;
	float y;
	
	Data(int x,float y){   // initialize through constructor
		
		this->x=x;
		this->y=y;
	}
	
	void print(Data dune){       // object in function parameter
		
		cout<<dune.x<<endl;
		cout<<dune.y<<endl;
	
	}	
};

int main(){
	
	Data d(12,45.6);
	Data d1(13,32.7);
	
	d.print(d1);
	
}
