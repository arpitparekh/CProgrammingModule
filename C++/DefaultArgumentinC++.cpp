#include<iostream>

using namespace std;

// default parameter

display(int x,int y,int z,int p,int q = 10){
	
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	cout<<p<<endl;
	cout<<q<<endl;
}

int main(){
	
	display(23,24,25,26);
}
