/*****************************************************************
* Basic driver file
* Author: Kgomotso Welcome
* Date: 19/02/2019
******************************************************************/


#include <iostream>
#include <string>
#include "database.h"

using namespace WLCKGO001;
using namespace std;

int main(){
 
	string input; 

	cout << "*********************** Welcome to the student Database. *********************" << endl;
	
	for(;;){

		cout << "Enter a number (or q to quit) and press return." << endl;
		cout << "0. Add student" << endl;
		cout << "1. Read database" << endl;
		cout << "2. Save database" << endl;
		cout << "3. Display given student data" << endl;
		cout << "4. Student Grade" << endl;
		cout << "q. Quit" << endl;

		cin >> input;
		clear();

		if (input == "0"){
			addStudent();

		}else if(input == "1"){
			readDatabase();
		
		}else if(input == "2"){
			saveDatabase();
		
		}else if(input == "3"){
		cout << "function displayStudentData() was called." << endl << endl;
		
		}else if(input == "4"){
		cout << "function studentGrade() was called." << endl << endl;
		
		}else if(input == "q"){
			break;
		}

		cout << "****************** Please select another option. *************************" << endl;
	
	}

	
	return 0;
}


