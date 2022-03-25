#include<iostream>
#include<string.h>

using namespace std;

class Student{
	
	public:                // access modifier
	
	int roll;
	char name[20];
	
	void study(){
		
		cout<<"Students are studing c++";
	}	
};

int main(){
	
	Student s;
	
	strcpy(s.name,"tops");    // object initialization
	s.roll = 23;
	
	cout<<s.name<<endl;
	cout<<s.roll<<endl;
	
	Student sarr[5];
	char data[10];
	int x;
	
	for(int i=0;i<3;i++){
		
		cin.getline(data,10);
		
		strcpy(sarr[i].name,data);
		
		cin >> x ;
		
		sarr[i].roll = x ;
		
		cin.ignore();
		
	}
	
	for(int i=0;i<3;i++){
		
		cout<<"name => " <<sarr[i].name<<"\nroll is => "<<sarr[i].roll<<endl;
	}
	
	
}


