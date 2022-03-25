#include<iostream>
#include<string.h>

using namespace std;

class Auth{
	
	char name[20];
	char password[10];
	int length;
	
	public:
		
		void login(char name[],char password[]){
			
			strcpy(this->name,name);
			strcpy(this->password,password);
			length=strlen(this->password);
			
		}
		
		void showMyDetails(){
			cout<<"Your name is \n";
			cout<<name;
			cout<<"Your Password is \n";
			for(int i=0;i<length;i++){
				cout<<"*";
			}
	
			
			
		}
	
};

int main(){
	
	Auth a;
	a.login("ankit","457485h45jjhj");
	a.showMyDetails();
	
}
