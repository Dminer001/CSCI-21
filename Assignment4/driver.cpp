/*
 * Name        : dl_node.h
 * Author      : Dustin Miner
 * Description : Header File assignment 4 dl_node
 */

#include "dl_list.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


using std::cin;
using std::ifstream;
bool is_number(const std::string& s);

int main(int argc, char* argv[]) 
{

    struct round_
    {
        int roundNum;
        int length;
    };
    string continue_;
    string filename = argv[1];
    string line, name;
    DLList myList;
    DLNode* iterator = NULL;
    int roundLength= 0;
    
    
       ifstream fin (filename.c_str());
       if(fin.fail()) 
       {
           return false;
           
       } else
       do
       {
           fin >> line;
           if (!is_number(line))
           {
               myList.insert(line);
               //myList.insert(line);
               cout << "the players are:\n";
               //cout << DLList(myList);
              //cout << myList.ToString();
             // cout << myList.getFront();
            //  cout << myList.head_->getNext()->getContents();
           } else
           {
               roundLength = atoi(line.c_str());
               iterator = myList.head_;
               for (int i = 1; i < roundLength; i++)
               {
                   iterator = iterator->getNext();
               }
               name = iterator->getContents();
               myList.removeFirst(name);
               iterator = myList.head_;
           }
           
               iterator = myList.head_;
           
           cout << "Moving on to the next round" << endl;
        //  cout << DLList(myList);
       cout << myList.ToString();
        cout << "Enter to continue\n";
        cin >> continue_;
       }while(!fin.eof());
       
       
       
       
    fin.close();
return 0;
}

bool is_number(const string& s)
{
    return !s.empty() && s.find_first_not_of("0123456789") == std::string::npos;
}