#include<iostream>
#include<string.h>

using namespace std;

class Emp{
	
	public:
	
	int roll;
	float salary;
	char name[30];
	
};

int main(){
	
	Emp e;
	
	strcpy(e.name,"shish bhai");
	e.salary = 23000.12;
	e.roll = 12;
	
	cout<<e.name<<" "<<e.roll<<" "<<e.salary<< " ";
	
	Emp e2;
	
	strcpy(e2.name,"Raj bhai");
	e2.salary = 230000.12;
	e2.roll = 1;
	
	cout<<e2.name<<" "<<e2.roll<<" "<<e2.salary;
	
}
