#include<iostream>
#define PI 3.14

using namespace std;

class Shape{   // we can not create object of abstract class
	
	public:
		
//		virtual int x;
	
//	virtual void area(int x,int y){};  // virtual function   // 
	
	virtual void area(int x,int y) = 0; // pure virtual function
	
};
class Circle : public Shape{

	public:
	void area(int x,int y=0){
		
		cout<<x<<endl;
		cout<<y<<endl;
		
	}


};


int main(){
	
	Circle c;
	
//	Shape s;
//	s.area(12);
	
	
//	Data d;
	
//	d.area(12);
	
	c.area(12);
	
}
