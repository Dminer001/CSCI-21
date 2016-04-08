/*
 * Name        : dl_node.h
 * Author      : Dustin Miner
 * Description : Header File assignment 4 dl_node
 */

#include "dl_list.h"
#include <fstream>

using std::ifstream

int main() 
{
    struct player 
    {
        string name = "";
        DLNode* chair;
    };
    
    struct round_
    {
        int roundNum = 0;
        int length = 0;
    }
    
    string filename = char*argv[];
    
    
    bool openFile(string filename)
{
    string line;
    int playerCount = 0, rounds = 0;
    DLList myList;
    ifstream fin (filename.c_str());
    if(fin.fail()) 
    {
        return false;
    } else
    
    do 
    {
        count = 0
        fin >> line;
        if (!isdigit(line))
        {
            player line;
            count++;
            player.chair = myList.insert(count);
        } else
        {
            rounds++
            round_.roundNum = rounds;
            round_.length = line;
        }
      }while(!fin.eof());
    }
    fin.close();
    return true;
}
return 0;
}