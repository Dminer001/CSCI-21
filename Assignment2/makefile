Atmtest: ATM.o bank.o savings.o checking.o credit.o
	g++ -Wall -g -o Atmtest ATM.o bank.o checking.o savings.o credit.o


#makes the ATM object file
ATM: ATM.cpp savings.h bank.h checking.h credit.h
	g++ -Wall -g -c ATM.cpp
#makes the bank object file
Bank: bank.cpp bank.h
	g++ -Wall -g -c bank.cpp
	
#makes the Savings object file
Savings: savings.cpp savings.h bank.h
	g++ -Wall -g -c savings.cpp
	
# makes the checking object file
Checking: checking.cpp checking.h bank.h
	g++ -Wall -g -c checking.cpp
	
#makes the Credit object file
Credit: credit.cpp credit.h bank.h
	g++ -Wall -g -c credit.cpp
	
#removes the object files
clean:
	rm *.o Atmtest
