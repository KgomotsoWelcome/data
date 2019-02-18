#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){

	string input; 
	cout << "####################### Welcome to the student Database. ###################" << endl;

	for(;;){

		cout << "Enter a number (or q to quit) and press return." << endl;
		cout << "0. Add student" << endl;
		cout << "1. Read database" << endl;
		cout << "2. Save database" << endl;
		cout << "3. Display given student data" << endl;
		cout << "4. Student Grade" << endl;
		cout << "q. Quit" << endl;

		cin >> input;
		if (input == "0"){
			cout << "function addStudent() was called." << endl;

		}else if(input == "1"){
		cout << "function readDatabase() was called." << endl;
		
		}else if(input == "2"){
		cout << "function SaveDatabase() was called." << endl;
		
		}else if(input == "3"){
		cout << "function displayStudentData() was called." << endl;
		
		}else if(input == "4"){
		cout << "function studentGrade() was called." << endl;
		
		}else if(input == "q"){
			break;
		
		cout << "########################################################################" << endl;

		}
	}

	return 0;
}

void clear(void) { system("clear"); }
