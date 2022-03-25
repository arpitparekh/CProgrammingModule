// oopc

// object oriented programming concepts
// pillers of object oriented programming

// procedure oriented // c/Basic/kotlin
// object oriented programming

// class // object // inheritance // encapsulation // polymorphism // abstraction

// class // 

// class   //  is cllection of similar type of properties and function / methods

// class student // char name[20]  // int age  // float height  // char sylabus[20]
// void study();   // void chantting();   //  

// class mobile
// int ram_size // int no_pixels // float battery-backup  // char name[10]  ->  color
//  ringing()   // void inavailable();   // 

// object  //  is a instance of a class

#include<iostream>
#include<string.h>

using namespace std;

class Student{
	
	// properites // variables  // atributes
	
	public:
	
	char name[20];
	int age = 34;
	float height;
	
	// methods // functions // 
	
	void display(){
		
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<height<<endl;
		
	}
	
//	void study(){
//		cout<<"Student are studing"<<endl;
//	}	
//	
//	void jumping(){
//		cout<<"students are Jumping"<<endl;
//	}
};

int main(){
	
	Student s,s1;
	s.age=23;
	s.height=34.56;
	strcpy(s.name,"vinit");           // initilize string using function
	s.display();
	
	s1.age=45;
	s1.height=78.65;
	strcpy(s1.name,"drushil");
	s1.display();
	
	
	int n;
	cout<<"Enter No of Students"<<endl;
	cin>>n;
	cin.ignore();
	
	Student sArr[n];    // object array
	
	for(int i=0;i<n;i++){
		
		cout<<"Enter name from student -> "<<i+1<<endl;
		gets(sArr[i].name);
		cout<<"Enter your age -> "<<endl;
		cin>>sArr[i].age;
		cout<<"Enter Height ->"<<endl;
		cin>>sArr[i].height;
		cin.ignore();
	}
	
	cout<<"\n\n"<<"Details of entered Students are :-> \n\n";
	
	for(int i=0;i<n;i++){
		cout<<i+1<<" student"<<endl;
		sArr[i].display();
		cout<<"\n";
	}
}


