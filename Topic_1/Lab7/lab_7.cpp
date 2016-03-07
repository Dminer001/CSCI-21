/*
 * Name        : lab_7.cpp
 * Author      : Dustin Miner
 * Description : Working with File I/O
 */
#include "lab_7.h"

// CODE HERE -- FUNCTION DEFINITION FOR ProcessFile()

// Opens the flile returns false if file fails to open
 
bool ProcessFile(string filename) 
{
    string line;
    ifstream fin (filename.c_str());
    if(fin.fail()) 
    {
        return false;
    } else 
    {
        do {
                fin >> line;
                if(line == "10")
                {
                    OnTen();
                } else if(line =="20") 
                {
                    OnTwenty();
                } else if(line == "30") 
                {
                    OnThirty();
                } else if(line == "40") 
                {
                    OnForty();
                } else if(line == "50")
                {
                    OnFifty();
                } else 
                {
                    OnError();
                }
            } while(!fin.eof());
    }
    fin.close();
    return true;
}

// Adds to counters fot arguments parsed
void ProcessArguments(int argc, char* argv[])
    {
        for (int i = 1; i < argc; i++) {
            string compare = argv[i];
        if (compare == "10")
        {
            OnTen();
        } else if (compare == "20")
        {
            OnTwenty();
        } else if (compare == "30")
        {
            OnThirty();
        } else if ( compare == "40")
        {
            OnForty();
        } else if ( compare == "50")
        {
            OnFifty();
        } else 
            OnError();
        }
        
    }