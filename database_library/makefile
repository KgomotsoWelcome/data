#*****************************************************************
# makefile used to compile the database.cpp and header file
# Author: Kgomotso Welcome
# Date: 19/02/2019
# Date completed: 24/02/2019
#*****************************************************************

CC=g++
CK=-std=c++11
CT=-fPIC

libbrain_database.so: database.o 
	$(CC) -o libbrain_database.so database.o $(CT) -shared $(CK)
	
database.o: database.cpp
	$(CC) -c -o database.o database.cpp $(CT) -shared $(CK)

clean:
	@rm -f *.o
	@rm *.so