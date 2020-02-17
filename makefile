test_vector3 : test_vector3.o vector3.o
	g++ -o test_vector3 test_vector3.o vector3.o

test_vector3.o : test_vector3.cpp vector3.h
	g++ -c test_vector3.cpp

vector3.o : vector3.cpp
	g++ -c vector3.cpp

clean :
	rm test_vector3 test_vector3.o vector3.o