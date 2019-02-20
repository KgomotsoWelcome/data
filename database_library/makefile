#FLAGS
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