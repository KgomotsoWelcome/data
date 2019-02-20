#FLAGS
CC=g++
CK=-std=c++11

all:databaseDriver

databaseDriver.o: databaseDriver.cpp
	$(CC)  -c -o databaseDriver.o databaseDriver.cpp $(CK) -I ./database_library/ -L ./database_library/ -lbrain_database

databaseDriver: databaseDriver.o
	$(CC)  -o databaseDriver databaseDriver.o $(CK) -I ./database_library/ -L ./database_library/ -lbrain_database

run: 
	export LD_LIBRARY_PATH=database_library/ && ./databaseDriver

clean:
	@rm -f *.o
	@rm databaseDriver
	@rm database.txt