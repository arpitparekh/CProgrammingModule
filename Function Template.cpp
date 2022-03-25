#include<iostream>

using namespace std;

template <typename T,typename V>
void display(T x,V f){
	
	cout<<x<<endl;
	cout<<f<<endl;
}

int main(){
	
	display(23.4545,"Hello");
	
}
