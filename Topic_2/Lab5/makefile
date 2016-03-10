#creates the executable from both object files

lab5test: lab_13_unit_test.o 
	g++ -Wall -g -o lab5test lab_13_unit_test.o

#creates the lab5 object file
#lab5: lab_5.cpp lab_5.h
#	g++ -Wall -g -c lab_5.cpp


#creates the unit test object file
lab_13_unit_test: lab_13_unit_test.cpp
	g++ -Wall -g -c lab_13_unit_test.cpp
	
clean:
	rm *.o lab5test