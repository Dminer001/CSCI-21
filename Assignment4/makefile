#creates the executable from objects
assign4test: driver.o dl_list.o dl_node.o
	g++ -Wall -g -o assign4test dl_list.o dl_node.o driver.o

#creates the drive object file
driver: driver.cpp
	g++ -Wall -g -c driver.cpp
	
#creates the dl_node object file
dl_node: dl_node.h dl_node.cpp
	g++ -Wall -g -c dl_node.cpp

#creates the dl_list object file	
dl_list: dl_list.cpp dl_list.h
	g++ -Wall -g -c dl_list.cpp
	
#removes all object files and exe	
clean:
	rm *.o assign4test