#include<iostream>

using namespace std;

class Matrix{
	
	public:
		
		int arr1[2][2];
		int arr2[2][2];
		int arr3[2][2];
		
		Matrix(int arr1[2][2],int arr2[2][2]){
			
			copy(arr1,arr1+4,this->arr1);    // array copy function
			copy(arr2,arr2+4,this->arr2);
		}
		
		void sum(){
			
		for(int i=0;i<2;i++){
		
			for(int j=0;j<2;j++){
			
				arr3[i][j]=arr1[i][j]+arr2[i][j];		
			}
			
		}
		
		cout<<"Sum is"<<endl;
		for(int i=0;i<2;i++){
		
			for(int j=0;j<2;j++){
			
				cout<<arr3[i][j]<<" ";
			}
			cout<<"\n";
		}
		
			
		}
		
		void sub(){
			
		for(int i=0;i<2;i++){
		
			for(int j=0;j<2;j++){
			
				arr3[i][j]=arr1[i][j]-arr2[i][j];		
			}
			
		}
		
		cout<<"Sub is"<<endl;
		for(int i=0;i<2;i++){
		
			for(int j=0;j<2;j++){
			
				cout<<arr3[i][j]<<" ";
			}
			cout<<"\n";
		}
			
		}
	
		
};

int main(){
	
	int arr1[2][2];
	int arr2[2][2];
	int x;
	
	cout<<"Enter Values in 2  (2*2) matrix"<<endl;
	
	cout<<"Enter Values in first matrix"<<endl;
	for(int i=0;i<2;i++){
		
		for(int j=0;j<2;j++){
			
			cin >> x;
			arr1[i][j] = x;
			
		}
	}
	cout<<"Enter Values in second matrix"<<endl;
	for(int i=0;i<2;i++){
		
		for(int j=0;j<2;j++){
			
			cin >> x;
			arr2[i][j] = x;
			
		}
	}
	cout<<"\n";
	Matrix m(arr1,arr2);
	m.sum();
	m.sub();
}
