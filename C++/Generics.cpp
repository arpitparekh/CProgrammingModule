#include<iostream>

using namespace std;

// template // generics

template <class T,class V>   // type safety
class Student{
	
	public:
	
	T x;
	V f;
	
	void assign(T x,V f){
		
		this->x=x;
		this->f=f;
	}
	void get(){
		cout<<x<<endl;
		cout<<f<<endl;
	}
	
};

int main(){
	
	Student<float,int> s;
	Student<int,double> s2;
	s.assign(12.34,12);
	s2.assign(23,23.234);
	s.get();
	s2.get();
}
