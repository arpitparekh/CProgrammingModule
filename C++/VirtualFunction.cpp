#include<iostream>

using namespace std;

class Person{  // abstract class
	
	public:
	
	int roll;
	char name[];
	int age;
	
	void assign(){
		
	}
	
	// virtual function // function without any body
	
	virtual void print() = 0 ;  // abstract properties
	
};

class Student : public Person{
	
	void print(){
		
	}
	
};

int main(){
	
	// abstract class
	
	Student s;
}
