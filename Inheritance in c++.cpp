#include<iostream>
#include<string.h>

using namespace std;

class College{   // parent class // base class   // super class
	
	public:
	
	char coll_name[20];
	int no_class;
	
	void give(char coll_name[],int no_class){
		
		this->no_class=no_class;
		strcpy(this->coll_name,coll_name);
	
		
	}
	
	
};

class Student  : public College{   // child class  // derived class  // subclass
	
	public:
	
	int roll;
	char name[20];
	
	void assign(int roll,char name[]){
		
		this->roll = roll;
		strcpy(this->name,name);
		
	}
	
	void print(){
		
		cout<<roll;
		cout<<name;
		cout<<coll_name;
		cout<<no_class;
	}

};

int main(){
	
	// inheritance
	
	// varso
	
	Student s;
	
	s.assign(12,"shish");
	s.give("CK",5);
	
	s.print();
	
	
	
}
