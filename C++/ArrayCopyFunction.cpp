#include<iostream>
#include<algorithm>
#include<iterator>

using namespace std;

int main(){
	
	int arr1[]={1,2,3,4,5,6,7};
	int arr2[]={1,2,3};
	
	int size1 = sizeof(arr1)/sizeof(int);
//	int size2 = sizeof(arr2)/sizeof(int);
	
//	int total = size1+size2;
	int arr3[size1];
	
	copy(arr1,arr1+size1,arr3);
	
	for(int i=0;i<size1;i++){
		
		cout<<arr3[i];
		
	}
}

