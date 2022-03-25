#include<iostream>
using namespace std;
// find the frequency of array element



void findFrequency(int arr[],int size,int freq[]){   // 2 2 3 3 4 4 
	
	int t;
	int count=0;
	
	
	for(int i=0;i<size;i++){   
		
		count=0;
		
		for(int j=i+1;j<size;j++){
			
			if(arr[i]==arr[j]){
				count++ ;
				freq[j]=1;
			}	
		}
		if(freq[i]!=1){
			
			freq[i]=count ;
		}
		
		
			
		}
		
		for(int i=0;i<size;i++){
			if(freq[i]!=1)
			{
				cout<<arr[i]<< " "<<freq[i]<<endl;
			}
		}
	}

int main(){
	int t,n;
	
	cout<<"Enter Array size"<<endl;
	cin>>n;
	int arr[n];
	int freq[n];
	cout<<"Enter Array Element"<<endl;
	for(int i=0;i<n;i++){
		cin>>t;
		arr[i]=t;
		freq[i]=0;
	}
	
	findFrequency(arr,n,freq);
}
