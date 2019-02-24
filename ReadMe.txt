************************************ReadMe.txt***********************************************

How to run the program:
	1. Go to the database_library directory.
	2. Compile database.cpp and the header file provided by using the makfile provided by typing "make" on the terimnal.
	3. Go to the Assignment1 directory.
	4. Compile databaseDriver.cpp using the makefile provided by using the keyword "make".
	5. To run the program use "make run".

Submitted contents:
	Assignment1:
	-databaseDriver.cpp
	-makefile
	-database.txt
	-.git folder
	-database_library
		--database.cpp
		--database.h
		--makefile

--databaseDriver.cpp file holds the event loop, basic text interface which gives the user options to select from.

--database.cpp file consists of a list of all the functions implemented when the user selects the one of the options available in the databaseDriver.cpp file.

--database.h file holds all the method definitions, the struct and the namespace. 

--database.txt file holds all the student records that are saved to the database. 

-- makefile holds all the commands for compiling and running all the files submitted.