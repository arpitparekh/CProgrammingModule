#include<iostream>

using namespace std;

class Fibo{
	
	public:
	
	void findFibo(int s){
		
			// 0 1 1 2 3 5 8 13
		
		int a = 0;
		int b = 1;
		int c = 0;
		
		for(int i=1;i<=s;i++){
			
			cout<<a<<" ";
			c = a+b;
			
			a =b ;
			
			b = c;
			
			
		}
		
			
		
	}
		
};

int main(){
	
	int size;
	
	cout<<"Enter size"<<endl;
	
	cin>>size;
	
	Fibo f;
	
	f.findFibo(size);
	
}

