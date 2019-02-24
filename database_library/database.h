/*****************************************************************
* Header file for the databaseDriver
* Author: Kgomotso Welcome
* Date: 19/02/2019
* Date completed: 24/02/2019
******************************************************************/

#ifndef _DATABASE_H
#define _DATABASE_H
#include <iostream>
#include <string>

using namespace std;

namespace WLCKGO001{

	struct StudentRecord{

		string studentNumber;
		string studentName;
		string studentSurname;
		string classRecord;
	};
	
	void clear();
	void addStudent();
	void readDatabase();
	void saveDatabase();
	void displayStudentData();
	void studentGrade();
	void createDatabaseVector();
}

#endif 