#creates the executable from both object files

lab7test: lab_7_unit_test.o lab_7.o
	g++ -Wall -g -o lab7test lab_7.o lab_7_unit_test.o

#creates the lab4 object file
lab7: lab_7.cpp lab_7.h
	g++ -Wall -g -c lab_7.cpp


#creates the unit test object file
lab_7_unit_test: lab_7_unit_test.cpp
	g++ -Wall -g -c lab_7_unit_test.cpp

lab8test: lab_8_unit_test.o lab_7.o
	g++ -Wall -g -o lab8test lab_7.o lab_8_unit_test.o



#creates the lab 8 unit test object
lab_8_unit_test: lab_8_unit_test.cpp
	g++ -Wall -g -c lab_8_unit_test.cpp


clean:
	rm *.o lab7test lab8test 