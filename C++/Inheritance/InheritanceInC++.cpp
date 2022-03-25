#include<iostream>
#define PI 3.14

using namespace std;

class Area {
	
	public:
	
	int width;
	int bredth;
	
	int side;
	
	int radius;


};

class Circle : public Area{
	
	public:
		
	void findArea(int r){
		this->radius=r;
		cout<<(PI * radius * radius)<<endl;
		
	}
	
	
};

class Rectangle : public Area{
	
	public:
	
	void findArea(int a,int b){
		this->width=a;
		this->bredth=b;
		cout<<(a*b)<<endl;
	}
};

class Square : public Area{
	
	public:
	
	void findArea(int f){
		
		this->side=f;
		
		cout<<(side*side)<<endl;
	}
};

int main(){
	
	Circle c;
	c.findArea(12);
	
	Rectangle r;
	r.findArea(34,56);
	
	Square s;
	s.findArea(55);
	
}
