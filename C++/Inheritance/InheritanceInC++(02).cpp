#include<iostream>

using namespace std;

class College{
	
	public:
	
	int no_dept;
	char name_dept[];
	long int no_bench;
	int no_classroom;
	int ratio;
	
	void findRatio(){
		
		ratio = (no_classroom/no_bench)*100;
		
	}
	
};

class Student : public College{
	
	
	
};

int main(){
	
	// inheritance
	// "varso"
	//  "varasdar"
	// "BPL"
	
	// accessing a parent class properties and function using child class object
	
	Student s;
		
	
}
