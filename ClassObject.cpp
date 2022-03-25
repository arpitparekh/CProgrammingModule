#include<iostream>   // std
#include<string.h>

using namespace std;

// OOPC

// class object

// class provides a template or blueprint for object

// by defualt all the properties of class is private

class Student{
	
	public:
		
	double height;
	int roll;
	char name[50];
	
	void print(){
		
		cout<<height<<" "<<roll<<" "<<name;
	}
};

// stack  // heap

int main(){
		
		
	
//	std::cout<<"Hello";    // :: scope resolution operator
	
	Student s,s2;
	
//	s.name = "shish";   // object properties initialization
	strcpy(s.name,"shish");
	s.roll = 1;
	s.height=343.43;
	
//	cout<<s.name<<"\n"<<s.height<<"\n"<<s.roll;

	s.print();	
	
	////////////////////////////////////////////////////////////////////////////
	

	
	
	
	
	
}
