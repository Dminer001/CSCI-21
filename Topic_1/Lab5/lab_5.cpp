/*
 * Name        : lab_5.cpp
 * Author      : Dustin Miner
 * Description : Practicing Functions. Use this file to write your
 *               Function Definitions (what goes below main()).
 */

#include "lab_5.h"

// CODE HERE (FUNCTION DEFINITIONS)
   
   // prints Hello world! to std::cout
    void Hello() {
        cout << "Hello world!";
    }
    
    // prints parameter to cout and returns it couldnt get it to work as a void function this one feels iffy to me
    string PrintMessage(const string& kInput) {
        cout << kInput;
        return kInput;
    }
    // returns the answer to the ultimate question
    int GetAnswer() {
        
        return 42;
    }
    
    //compares two int and returns the large defaults to second if they are equal
    int FindLarger(int first, int second) {
        if (first > second) {
            return first;
        } else 
        
        return second;
    } 
    
    // takes 2 parameters if the second is true shifts the first to uppercase
    string BuildMessage(string message, bool upper) {
        string built = "Message: ";
        
        if (upper == true) {
        for (int i = 0; i < message.length(); i++) {
           message[i] = toupper(message[i]);
        }
        }
        if (message == "") 
            message = "empty";
        built += message;
        return built;
    }