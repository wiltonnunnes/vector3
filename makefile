test_vector3 : test_vector3.cpp
	g++ test_vector3.cpp vector3.a -o test_vector3

vector3.o: vector3.cpp
	g++ -c vector3.cpp

vector3.a: vector3.o
	ar rcs vector3.a vector3.o

clean :
	rm test_vector3 test_vector3.o vector3.o