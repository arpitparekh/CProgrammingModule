#include<iostream>
#include<string.h>

using namespace std;

class Auth{
	
	char name[20];
	char password[10];
	char enterpassword[10];
	char newpassword[100];
	int length,n;
	
	public:
		
		void login(char name[],char password[]){
			
			strcpy(this->name,name);
			strcpy(this->password,password);
			length=strlen(this->password);
			
		}
		
		void showMyDetails(){
			cout<<"Your name is \n";
			cout<<name<<endl;
			cout<<"Your Password is ";
			for(int i=0;i<length;i++){
				cout<<"*";
			}
			
			cout<<endl;
			
		}
//		
		void EnterPassword(){
			
			cout<<"Enter your password for checking \n"<<endl;
			
			gets(enterpassword);
			
			if (!strcmp(password,enterpassword))
			{
				printf("Welcome to the Future \n");
			}
			else
			{	
				cout<<"Your Password is wrong \n";
				jump: ;
				cout<<"choose 1 for enter again \n 2 for new password \n";
				cin>>n;
				cin.ignore();
				switch(n){
					
					case 1:
						this->EnterPassword();
						break;
					case 2:
						this->Forgot();
						break;
					default:
						cout<<"Enter once again"<<endl;
						goto jump;	
						
				}
				
				
				
				
			}
		}
		
		void Forgot(){
				
			
				
			cout<<"\nEnter your new password - "<<endl;
			
			gets(newpassword);
			
			
			cout<<"your new password is "<<newpassword<<endl;
			
			cout<<"your old password is "<<password<<endl;
			
			strcpy(this->password,this->newpassword);
			
			this->EnterPassword();
			
			
		}
	
	
};

int main(){
	
	Auth a;
	a.login("ankit","password");
	a.showMyDetails();
	a.EnterPassword();
	
	
	
}
