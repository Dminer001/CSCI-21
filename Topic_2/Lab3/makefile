#creates the executable from both object files

topic2lab3test: lab_11_unit_test.o money.o
	g++ -Wall -g -o topic2lab3test money.o lab_11_unit_test.o

#creates the lab4 object file
money: money.cpp money.h
	g++ -Wall -g -c money.cpp


#creates the unit test object file
lab_11_unit_test: lab_11_unit_test.cpp
	g++ -Wall -g -c lab_11_unit_test.cpp




clean:
	rm *.o topic2lab3test