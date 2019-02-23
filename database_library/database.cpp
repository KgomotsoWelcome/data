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
#include <sstream>

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

	cout << "Add the surname of the student." <<endl;
	cin >> student.studentSurname;

	cout << "Add the class record." <<endl; 
	cin.ignore();
	getline(cin, student.classRecord);

	bool duplicate = false;
	for (int i = 0; i<studentsDatabase.size(); i++){
		if (studentsDatabase[i].studentNumber == student.studentNumber){
			cout << "The student has been added to the database" << endl;
			duplicate = true;
		}
	}
	if (!duplicate){
		studentsDatabase.push_back(student);
	}
}

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
	}

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

	void WLCKGO001 :: displayStudentData(){
		cout << "function displayStudentData() was called." << endl << endl;
		cout << "Enter the name of the student number you want to search for" << endl;
		string searchStudentNo;
		cin >> searchStudentNo;
		for (int i = 0; i < studentsDatabase.size(); i++){
			if (searchStudentNo == studentsDatabase[i].studentNumber){
				cout << "We have found the following details:" << endl;
				cout << studentsDatabase[i].studentNumber << endl;
				cout << studentsDatabase[i].studentName << endl;
				cout << studentsDatabase[i].studentSurname << endl;
				cout << studentsDatabase[i].classRecord << endl;
			}
		}
	}

	void WLCKGO001 :: studentGrade(){
		cout << "function studentGrade() was called." << endl << endl;
		cout << "Enter the name of the student number you want to search for" << endl;
		string searchStudentNo;
		cin >> searchStudentNo;
		int average = 0;
		vector <int> score;
		for (int i = 0; i < studentsDatabase.size(); i++){
			if (searchStudentNo == studentsDatabase[i].studentNumber){

				string stringValue = studentsDatabase[i].classRecord;
				istringstream iss(stringValue);

				for (int n=0; n<5; n++){
				    int val;
				   	iss >> val;
				    score.push_back(val);
				}
			}
			for (int i=0; i<score.size();i++){
				average+=score[i];
			}	
			average = average/score.size();
			cout << "The average of the student is: " << average << '\n';
		}
		
	}

	void WLCKGO001 :: createDatabaseVector(){
		/**ifstream file("database.txt");
		int tokenSize;
		std::string line;
		vector<string> tokens;
		if(file.is_open()){
			cout << "Kgomotso hi" << endl;
	    	while (getline(file, line)) { 
		        std::cout << line << '\n';
		        stringstream check1(line);
		        vector<string> tokens;
	    		string intermediate;
		        while(getline(check1, intermediate,' ')){ 
				    tokens.push_back(intermediate);
				     
				}
				
				tokenSize << tokens.size();
		    }
		    for (int i = 0; i<=tokenSize; i++){
		    	cout << "i " <<i << endl;
		    	cout << "Kgomotso" << endl;
		    	cout << "tokenSize" << tokenSize;
		    	cout << tokens[i] << endl;
		    }
		    file.close();
	    }
	    **/
		string filename = "database.txt";
		string line;
		string s;
		vector<string> items;
		
		ifstream in(filename.c_str());

		if(!in)
			{ cout << "Couldn't open " << filename << endl; }
			while (std::getline(in, line,'\n')) {
				vector<string> tokens;
				string tempName;
				string tempSurname;
				string studentNumber;
				string classRecord;
				stringstream check1(line);
				string intermediate; 
				while(getline(check1, intermediate,' ')){ 
				    tokens.push_back(intermediate); 
				}
				int tokenSize;
				tokenSize >> tokens.size();
				//int amountIndex = tokenSize-1;
				for (int i =0;i<tokens.size()-2;i++){
					cout << tokens[i]<<" ";
				}
				cout << endl;
				//cout << "  - " << tokens[tokens.size()-2] << endl;
				//cout << "  - " << tokens.back() <<  " calories" << endl;
			}

		in.close();
	}


