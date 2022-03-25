#include<iostream>
#include<string.h>

using namespace std;

class Tops{
	
	public:
	
	char course[30];
	char faculty[30];
	
};

class Student : public Tops {
	
	public:
	
	char name[30];
	
	
	void assign(char name[],char course[],char faculty[]){
		
		strcpy(this->name,name);
		strcpy(this->course,course);
		strcpy(this->faculty,faculty);
		
	}
	
	void print(){
		
		cout<<name<<endl;
		cout<<course<<endl;
		cout<<faculty<<endl;
	}
};

int main(){
	
	char name[30];
	char course[30];
	char faculty[30];	
	
	char data[30];
		
	Student arr[1];
	int i;
	for(i=0;i<1;i++){
		
		cout<<"Enter Student Values"<<endl;
		
		gets(name);
		gets(course);
		gets(faculty);
		
		arr[i].assign(name,course,faculty);
			
	}
	
	
	
	for(i=0;i<1;i++){
			
		arr[i].print();
	}
	
	cout<<"------------------------------------------------------------------------------"<<endl;
	
	cout<<"Enter Student Name to check"<<endl;
	
	gets(data);
	
	int x =1;
	for(i=0;i<3;i++){
			
		if(!strcmp(arr[i].name,data)){
			x =2;
			arr[i].print();
			
		}
	}
	
	if(x==1){
		
		cout<<"Not Found"<<endl;
	}
	
	
	
}
