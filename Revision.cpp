#include<iostream>
#include<string.h>

using namespace std;

class Student{
	
	public:
	
	int roll;
	char name[30];
	
	
	Student(int roll,char name[]){
		
		this->roll = roll;
		strcpy(this->name,name);
		
	}
	
	void display(){
		
		cout<<roll<<endl;
		cout<<name;
	}
	
};

int main(){
	
	
	
	Student s(1,"Shish");
	
//	cout<<s.roll<<endl;
//	cout<<s.name;
	
	s.display();

}
