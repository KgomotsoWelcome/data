/*****************************************************************
* .cpp file for function definitions and implementations
* Author: Kgomotso Welcome
* Date: 19/02/2019
******************************************************************/
#include <cstdlib>
#include "database.h"
#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>

using namespace std;

WLCKGO001 :: StudentRecord student;

vector <WLCKGO001 :: StudentRecord> studentsDatabase; 

void WLCKGO001 :: clear() { 
	system("clear"); 
}

void WLCKGO001 :: addStudent() { 

	cout << "function addStudent() was called." << endl << endl;

	cout << "Add the student number of the student." << endl;
	cin >> student.studentNumber;

	cout << "Add the name of the student." <<endl;
	cin >> student.studentName;

	cout << "Add the student of the student." <<endl;
	cin >> student.studentSurname;

	cout << "Add the class record." <<endl; 
	cin >> student.classRecord;

	studentsDatabase.push_back(student);

	};

	void WLCKGO001 :: saveDatabase(){
		//ifstream databasefile("database.txt");
		ofstream databasefile;
		databasefile.open("database.txt");
		//databasefile << "Kgomotso"<< endl;

		/**for (auto i : studentsDatabase) 
    		std::cout << studentsDatabase[i] << '\t';
		std::cout << '\n';

		
	
		for(unsigned int i=0; i<studentsDatabase.size(); i++)
			databasefile << studentsDatabase[i] << endl;
			**/
		for(auto&& x: studentsDatabase) 
			databasefile << studentsDatabase[x] << endl;
		databasefile.close();

	};

