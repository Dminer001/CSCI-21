#creates the executable from both object files

lab1test: lab_1_unit_test.o lab_1.o
	g++ -Wall -g -o lab1test lab_1.o lab_1_unit_test.o

#creates the lab4 object file
lab1: lab_1.cpp lab_1.h
	g++ -Wall -g -c lab_1.cpp


#creates the unit test object file
lab_1_unit_test: lab_1_unit_test.cpp
	g++ -Wall -g -c lab_1_unit_test.cpp

clean:
	rm *.o lab1test