#include<iostream>

using namespace std;

class Student{
	
	// operator overloading
	
	// operator that can not be overloaded  : ?  ::  .  sizeof  =
	
	public:
	
	int roll;
	float height;
	
	Student(){
		
	}
	
	Student(int roll,float height){
		this->roll=roll;
		this->height=height;
	}
	
	Student operator ==(Student &s){
		
		Student s3;
		
		s3.roll =  roll + s.roll ;
		s3.height = height + s.height;
	
		return s3;
	}
	
};

int main(){
	
	// operator
	
	//  + - /  *   ==   <   >= 
	
	int x =23;
	int y =45;
	
	cout<<x+y<<endl;
	
	Student s1(1,12.34);
	Student s2(2,22.44);
	
	Student s3;
	
	s3 = s1==s2 ;
	
	cout<<s3.roll<<endl;
	cout<<s3.height<<endl;
	
}
