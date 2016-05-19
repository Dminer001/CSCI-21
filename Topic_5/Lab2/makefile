#creates the executable from objects
lab27test: lab_27_unit_test.o lab_27.o
	g++ -Wall -g -o lab27test lab_27_unit_test.o lab_27.o

#creates the lab_27 object
lab_27: lab_27.cpp lab_27.h
	g++ -Wall -g -c lab_27.cpp
	
#creates the lab27 unit test object
lab_27_unit_test: lab_27_unit_test.cpp
	g++ -Wall -g -c lab_27_unit_test.cpp
	
#removes all object files and exe	
clean:
	rm *.o lab27test