#include<iostream>

using namespace std;



int main(){
	
	int a,b,c;
		
	jump :  ;	
	cout<<"Enter Three Values"<<endl;
	
	cin>>a;
	
	if(a<0){
		
		goto jump;
	}
	
	cin>>b;
	
	if(b<0){
		
		goto jump;
	}
	
	cin>>c;
	
	if(c<0){
		
		goto jump;
	}
	cout<<"Average is "<<(a+b+c)/3;
	
		
	
}
