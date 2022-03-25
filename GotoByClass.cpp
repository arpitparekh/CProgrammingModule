#include<iostream>

using namespace std;

class Max{
	
	public:
	
	int a,b,c;


	void assign(int x,int y,int z){
		
		a=x;
		b=y;
		c=z;
		
	}
	void average(){
		
		cout<<(a+b+c)/3;
	}
	
};

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
	
	Max m;
	
	m.assign(a,b,c);
	
	
	m.average();
	
	
}
