#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	
	
	// scope resolution operator
	
	// armstrong number // 0 => 
	
	// narcissistic number
	
	int last_digit;
	int sum=0;
	int n ,n1;
	
	cout<<"Enter Number"<<endl;
	cin>>n;
	
	n1=n;
	while(n!=0){
	
		last_digit = n%10;
	
		sum += pow(last_digit,3);
	
		n /= 10;
	}
	
	if(n1==sum){
		cout<<"Given Number is Narcissistic Number";
	}else{
		
		cout<<"Not Narcissistic Number";
	}
	
}
