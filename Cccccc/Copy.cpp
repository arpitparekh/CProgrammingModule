#include<iostream>

using namespace std;

class Study{
	
	public:
	// copy constructor
	
	int x;
	float y;
	
	Study(int x,float y){
		
		this->x=x;
		this->y=y;
	}
	
	Study(Study &obj){               // copy constrcutor  // to make exact copy of objet
		
		this->x =obj.x;  // 12
		this->y =obj.y;  // 13.45
	}
};

