#include<iostream>

using namespace std;

class Matrix{
	
	public:
	
	int arr[2][3];
	
	void setValue(){
		
		int n;
		
		for(int i=0;i<2;i++){
			
			for(int j=0;j<3;j++){
				cin>>n;
				arr[i][j] = n;
			}
		}
		
	}
	
	void print(){
		for(int i=0;i<2;i++){
			
			for(int j=0;j<3;j++){
				
				cout<<arr[i][j];
			}
			cout<<endl;
		}
		
	}
	
	
	
};

int main(){
	
	Matrix m;
	

	
	m.setValue();
	m.print();
}
