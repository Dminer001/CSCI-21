#creates the executable from object files

lab10test: lab_10_unit_test.o item.o food_item.o magic_item.o
	g++ -Wall -g -o lab10test lab_10_unit_test.o item.o food_item.o magic_item.o 

#creates the item object file
item: item.cpp item.h
	g++ -Wall -g -c item.cpp
	
#creates the food_item object file
food_item: food_item.cpp food_item.h
	g++ -Wall -g -c food_item.cpp
	
#creates the magic_item object file
magic_item: magic_item.cpp magic_item.h
	g++ -Wall -g -c magic_item.cpp


#creates the unit test object file
lab_10_unit_test: lab_10_unit_test.cpp
	g++ -Wall -g -c lab_10_unit_test.cpp





 
clean:   
	rm *.o lab10test