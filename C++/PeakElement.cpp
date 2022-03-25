#include<iostream>

using namespace std;

int main(){
	
	int arr[]={1,1,1,4,6,4,9,1,11,23,11,44,11,55,11};
	
	int size = 15;
	
	for(int i=0;i<size;i++){  // i = 0 
		
		if(arr[i]<size){
			
			if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2]){
				
				cout<<arr[i+1]<<endl;
				
			
		}	
		}
		
    }
	
}
