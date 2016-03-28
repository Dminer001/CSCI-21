#creates the executable from both object files

lab12test: lab_12_unit_test.o lab_12.o
	g++ -Wall -g -o lab12test lab_12.o lab_12_unit_test.o

#creates the lab_12 object file
lab_12: lab_12.cpp lab_12.h
	g++ -Wall -g -c lab_12.cpp


#creates the unit test object file
lab_12_unit_test: lab_12_unit_test.cpp
	g++ -Wall -g -c lab_12_unit_test.cpp





 
clean:   
	rm *.o lab12test   