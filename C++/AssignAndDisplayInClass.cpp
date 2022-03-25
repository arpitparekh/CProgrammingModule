#include<iostream>
#include<string.h>

// this keyword

using namespace std;

class Employee{              // this keyword // refers to the current class object
	
	public:
	
	int id;
	char name[20];
	char dept[20];
	float salary;
	
	void assign(int id ,char name[],char dept[],float salary = 30000){   // default parameter
		
		this->id = id;
		strcpy(this->name,name);
		strcpy(this->dept,dept);
		this->salary= salary;
		
	}
	
	void display(){
		
		cout<<id<<endl;
		cout<<name<<endl;
		cout<<dept<<endl;
		cout<<salary<<endl;
	}	
};

int main(){
	
	Employee e;
	e.assign(12,"sahil","civil",23333.45);
	e.display();
	
}
