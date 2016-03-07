#creates the executable from both object files

assignment1test: assignment_1_unit_test.o assignment_1.o
	g++ -Wall -g -o assignment1test assignment_1.o assignment_1_unit_test.o

#creates the lab4 object file
assign1: assignment_1.cpp assignment_1.h
	g++ -Wall -g -c assignment_1.cpp


#creates the unit test object file
assignment_1_unit_test: assignment_1_unit_test.cpp
	g++ -Wall -g -c assignment_1_unit_test.cpp




clean:
	rm *.o assign1test