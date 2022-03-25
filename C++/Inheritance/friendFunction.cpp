#include<iostream>

using namespace std;

class Student{
	
	int x;
	int y;
	
	public:
	friend void display(Student &s);   // friend function declaration	
};

void display(Student &s){
	
	cin>>s.x;
	cin>>s.y;
	cout<<s.x<<endl;
	cout<<s.y<<endl;	
}

int main(){
	
	Student s;
	display(s);	
}
