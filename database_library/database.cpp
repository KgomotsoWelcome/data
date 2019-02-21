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
#include <string>
#include <exception>

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
		cout << "function saveDatabase() was called." << endl << endl;
	
		ofstream databasefile;
		databasefile.open("database.txt");
		if (databasefile.is_open()) {

			for(unsigned int i=0; i<studentsDatabase.size(); i++){
				string numberStudent = studentsDatabase.at(i).studentNumber;
				string nameStudent = studentsDatabase.at(i).studentName;
				string surnameStudent = studentsDatabase.at(i).studentSurname;
				string classRecordStudent = studentsDatabase.at(i).classRecord;
				string studentDetails = numberStudent +" "+ nameStudent +" "+ surnameStudent +" "+ classRecordStudent+'\n';
				databasefile << studentDetails;
			};

		databasefile.close();

        }else{

            cout <<"Couldn't open file";
        }
	};

	void WLCKGO001 :: readDatabase(){
		cout << "function readDatabase() was called." << endl << endl;
		ifstream file("database.txt");
		std::string line;
		if(file.is_open()){
	    	while (getline(file, line)) {
		        std::cout << line << '\n';
		    }
		    file.close();
	    }

	}

