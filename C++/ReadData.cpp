#include<iostream>
#include<fstream>

using namespace std;

int main(){

	// read data from file
	
	ifstream ifs;
	
	char data[34];
	
	int i=0;
	
	ifs.open("C:\\fun\\hello.txt");
	
	char ch;

	while(ifs.get(ch)){
		
		data[i]=ch;
		i++;
	}
	puts(data);
		
}
