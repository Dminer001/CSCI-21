#creates the executable from both object files

lab20test: lab_20_unit_test.o sl_node.o sl_list.o
	g++ -Wall -g -o lab20test sl_node.o sl_list.o lab_20_unit_test.o

#creates the sl_node object file
sl_node: sl_node.cpp sl_node.h
	g++ -Wall -g -c sl_node.cpp

#creates the sl_list object file

sl_list: sl_list.cpp sl_list.h
	g++ -Wall -g -c sl_list.cpp
	
	
#creates the unit test object file
lab_20_unit_test: lab_20_unit_test.cpp
	g++ -Wall -g -c lab_20_unit_test.cpp





 
clean:   
	rm *.o lab20test   