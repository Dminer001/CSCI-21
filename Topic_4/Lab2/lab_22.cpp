/*
 * Name        : lab_22.cpp
 * Author      : Michael Harris / Gage Smith / Dustin Miner
 * Description : Recursive Functions
 */

#include "lab_22.h"

// CODE FUNCTION DEFINITIONS HERE

unsigned int Factorial(unsigned int value) {
    // If greater than 1
    // Call Factorial() until value is 1
    while(value >= 1)
    {
        if(value == 1)
        {
            return value;
        }
        else
        {
            return (value * Factorial(value - 1));
        }
    }
    // Else, return 1;
    return 1;
}

unsigned int Fibonacci(unsigned int fib_value) {
    // If greater than 0
   // unsigned int temp = 1;
    if(fib_value == 0) {return 0;}
    if(fib_value == 1) {return 1;}
  
       // temp +=1;
        return  Fibonacci(fib_value - 1) + Fibonacci(fib_value - 2);
    
    // Else, return 0;
 
        // Call Fibonacci()
}
bool WordIsPalindrome(string word) 
{
     if(word.length() <= 1) 
    {
        return true;
    } 
    else if(word[0] == word[word.length() - 1])
    {
        return WordIsPalindrome(word.substr(1, word.length() -2));
    }
}


string ArrayForwardsAsString(int array[], unsigned int start, unsigned int size) 
{
    stringstream ss;
    if (start == size)
    {
        return "";
    }
    else if (start < size)
    { 
        ss << array[start] << " " << ArrayForwardsAsString(array, start + 1, size);
    }
    return ss.str();
}


string ArrayBackwardsAsString(int array[], int start, unsigned int size) 
{
    stringstream ss;
    if (start < 0)
    {
        return "";
    }
    else if (start >= 0)
    { 
        ss << array[start] << " " << ArrayBackwardsAsString(array, start - 1, size);
    }
    return ss.str();
}