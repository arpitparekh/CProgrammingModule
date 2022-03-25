#include<iostream>
#include<string.h>

using namespace std;

// oopc  //

void removeDuplicate(char data[]){
	
	int length = strlen(data);
	char ch ;
	char oldCh=' ';
	
	for(int i=0;i<length;i++){
		
		ch =data[i];
		
	if(ch==oldCh){
		continue;
	}
	oldCh = ch;
	cout<<ch;
}	
	oldCh = ch;
}

int main(){
	
	char name[20];
	gets(name);
	removeDuplicate(name);
	
}
