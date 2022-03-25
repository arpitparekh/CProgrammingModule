#include<iostream>

using namespace std;

// access modifier

// abstraction 

// data hiding

class Data{
	
	private:   // access modifier  // abstract properties
	
	int x;
	int y;
	int sum;
	
	void display(){
	
		cout<<"This is private method \n"<<endl;
	}
	
	void print(){
			
			cout<<x<<endl;
			cout<<y<<endl;
			display();
		}
	
	public:
		
		Data(int x,int y){
			
			this->x = x;
			this->y = y;
			
			sum=this->x+this->y;
			cout<<sum<<endl;
		}
		
//		void findSum(int x,int y){
//			
//		
//		}
		
		
};

int main(){
	
	Data d(12,13);
	
}
