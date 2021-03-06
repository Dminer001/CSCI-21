/*
 * Name        : lab_recursion.cpp
 * Author      : Dustin Miner
 * Description : Recursive Functions
 */

#include "lab_recursion.h"

// CODE FUNCTION DEFINITIONS HERE

/*
 * UPDATE!!!! to match the requirements
 * Convert a decimal number to binary
 * @param number to be converted.
 * @return a stringstream.
 */
stringstream decToBin(int num)
{
    stringstream ss;
    if (num > 1) //note this makes the base case num = 0
    {
		 ss << decToBin(num/2); //recursive call
	}



     return ss.str();
}


/*
 * Convert a binary number to decimal
 * @param number to be converted
 * @return an unsigned int
 */
unsigned int binToDec(int num)
{
    return 0;
}
