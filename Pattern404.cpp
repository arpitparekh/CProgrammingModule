#include<iostream>

using namespace std;

int main(){
	
//	1
//	23
//	456
//	78910
//	11 12 13 14
int n = 1;

	for(int i=1;i<=5;i++){
		
		for(int j=1;j<=i;j++){
			
			cout<<n<<"   ";
			
			n++;
		}
		n=1;
		cout<<endl;
		
		
	}
	
	
}

