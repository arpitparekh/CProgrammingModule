#include<iostream>

using namespace std;

void addArray(int arr1[],int arr2[],int a,int b){
	
	int arr3[a+b];
	
	int n=0;
	
	for(int i=0;i<a;i++){
		
		arr3[i]=arr1[i];
	}
	
	for(int i=a;i<a+b;i++){
		
		arr3[i]=arr2[n];
		n++;
	}
	
	for(int i=0;i<a+b;i++){
		
		cout<<arr3[i]<<" ";
		
	}
	
	
	
}

int main(){
	

	int arr1[5]={1,2,3,4,5};
	int arr2[6]={1,2,3,4,5,6};
	
	int length1 = sizeof(arr1)/sizeof(int);	
	int length2 = sizeof(arr2)/sizeof(int);
	
	addArray(arr1,arr2,length1,length2);	
	
}
