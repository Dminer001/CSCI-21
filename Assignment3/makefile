#creates the executable from both object files

assign3test: assign_3_unit_test.o prize.o
	g++ -Wall -g -o assign3test prize.o assign_3_unit_test.o

#creates the driver executable
assign3driver: driver.o prize.o
	g++ -Wall -g -o assign3driver prize.o driver.o


#creates the lab4 object file
assign3: prize.cpp.cpp prize.h
	g++ -Wall -g -c prize.cpp


#creates the unit test object file
assign_3_unit_test: assign_3_unit_test.cpp
	g++ -Wall -g -c assign_3_unit_test.cpp
	
#creates the driver object file
driver3: driver.cpp
	g++ -Wall -g -c driver.cpp



clean:
	rm *.o assign3test assign3driver