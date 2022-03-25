#include<iostream>

using namespace std;

class Demo{
	
	public:
	
	int a;
	
	float f;
	
	int arr[10];
	
	char ch;
	
};

int main(){
	
	Demo d;
	int x;
//	d.arr  // array

	for(int i=0;i<10;i++){
		
		cin>>x;
		
		d.arr[i] = x;
		
	}
	
	d.a = 12;
	d.f = 12.3;
	d.ch = 'f';
	
	for(int i=0;i<10;i++){
		
		cout<<d.arr[i]<<" ";
		
	}
	
	cout<<d.a<<" "<<d.f<<" "<<d.ch;
	
}
