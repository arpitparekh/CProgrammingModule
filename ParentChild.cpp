#include<iostream>
#include<string.h>


using namespace std;

class Vehicle{
	
	public:
	
	int speed;
	char type[20];
	
	Vehicle(){
		
		cout<<"This is Vehicle Class Default Constructor"<<endl;
	}
	
	void display(){
		
		cout<<speed<<endl;
		cout<<type<<endl;
	}
	
};

class Car : public Vehicle{
	
	public:
	
	char name[30];
	int milage;
	
	Car(char name[],int milage,int speed,char type[]){
		
		strcpy(this->name, name);
		this->milage = milage;
		this->speed = speed;
		strcpy(this->type,type);
		
		display();
		print();
		
	}
	
	void print(){
		
		cout<<name<<endl;
		cout<<milage<<endl;
	}
	
};

int main(){
	
	Car c("Honda",34,123,"car");

	
}
