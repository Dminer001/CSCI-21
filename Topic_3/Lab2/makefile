#creates the executable from both object files

lab17test: lab_17_unit_test.o sl_node.o
	g++ -Wall -g -o lab17test sl_node.o lab_17_unit_test.o

#creates the sl_node object file
sl_node: sl_node.cpp sl_node.h
	g++ -Wall -g -c sl_node.cpp


#creates the unit test object file
lab_17_unit_test: lab_17_unit_test.cpp
	g++ -Wall -g -c lab_17_unit_test.cpp





 
clean:   
	rm *.o lab17test   