#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	// file handling
	// fopen() // read // write // "r"
	
	// ofstream // ifstream
	
	// stream // sequence of data
	
	ofstream os; // write
	
	char name[30];
	
	os.open("C:\\fun\\hello.txt",ios_base::app);
	
	cout<<"Enter String"<<endl;
	
	cin.getline(name,30); // 30 byte
	
	os << name;
	
	
	cout<<"File Write Successfully"<<endl;
	
	os.close();
	
	
}
