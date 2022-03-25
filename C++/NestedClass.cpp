#include<iostream>

using namespace std;

class College{
	
	public:
	
	int no_class;
	char dep_name[];
	
	class Faculty{
		
		public:
		
		char fac_name[];
		int id;	
	};
	
	class Student{
		
		public:
		
		char stud_name[];
		int roll_no;
		
	};
	
};


int main(){
	
	College g;
	g.Faculty.fac_name;
	g.Student.roll_no;
	
	
}
