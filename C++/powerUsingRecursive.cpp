#include<iostream>

using namespace std;

int findPower(int x,int y){
	// int x =p;
	// int y =q;
	while(y>0){
		return x * findPower(x,y-1);   // return 9
	}
	return 1;
	
}

int main(){
	
	int p,q;
	cin>>p>>q;
	cout<<findPower(p,q);  // 3 // 2
	
}
