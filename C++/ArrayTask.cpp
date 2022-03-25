#include<iostream>
#include<string.h>

using namespace std;


int main(){
	
//	"Hello my name is dhruv and I was born in 1999 and 1999 has known as a golden year"
	
	char name[]="Hello my name is dhruv and I was born in 1999 1999 19991998 and 2008 has known as a golden year and that time 6000 people born";
	
	int length = strlen(name);
	
	
	
	char arr[]="0000";
	
	char oldArr[]="0000";
	
	for(int i=0;i<length;i++){
		
		int size = 0;
		int j =0;
		int m=0;
		
		if(name[i]<=57 && name[i]>=48){
			
			while(size<4){
				arr[j]=name[i];
				size++;
				i++;
				j++;
			}
			if(!strcmp(arr,oldArr)){
				goto jump ;          /////////////////////////////////
			}
			for(j=0;j<4;j++){
				
				cout<<arr[j];	
			}
			cout<<endl;
					
			jump : ;    /////////////////////////////
			
			for(j=0;j<4;j++){
				oldArr[m] = arr[j];
				m++;
			}
			m=0;
			i=i-1;	
		}
	}
}
