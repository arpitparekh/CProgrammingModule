#include<iostream>

using namespace std;

class C{
	
	public:
	
	int x;
	float y;
	
	C getData(int x,int y){
		
		C c;
		c.x = x;
		c.y = y;
		
		return c;
	}
};

int main(){
	
	C c;
	
	C c2 = c.getData(12,13);
	
	cout<<c2.x<<endl;
	cout<<c2.y<<endl;
	
}
