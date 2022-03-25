#include<iostream>

using namespace std;

int main(){
	
	int x;
	
	cout<<"Enter Your Salary"<<"\n";
	
	cin >> x;
	
	int da =  x*0.45 ;
	
	int hra = x*0.14;
	
	int cca = x*0.1;
	
	int gross = x + da + hra + cca  ;
	
	cout<<gross<<endl;
	
	int pf = x * 0.12;
	
	int lic = x *0.15;
	
	int net = gross - pf - lic;
	
	cout<< net;
	
	
	
}
