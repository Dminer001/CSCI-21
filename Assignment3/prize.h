/*
 * Name        : prize.h
 * Author      : Dustin Miner
 * Description : Class Header File
 */

#ifndef LAB_H
#define LAB_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Prize
{
    public:
    /**
     * Default constructor
     * initializes prizeName and prizeValue
     * prizeName = "NO NAME"
     * prizeValue = 0
     */
    Prize();
    
    /**
     * Overloaded construcor
     * sets variables to parameters
     * @param string name
     * @param unsigned int value
     */
    Prize(string name, unsigned int value);
     
     /**
      * Destructor
      * empty does nothing
      */
    ~Prize();
     
    /**
     * Accossor for prizeName
     * @return prizeName_
     */
    string getPrizeName();
      
    /**
     * Accossor for prizeValue
     * @return prizeValue_
     */
    unsigned int getPrizeValue();
    
    /**
     * Mutator for prizeName
     * @param string name
     */
    void setPrizeName(string name);
    
    /**
     * Mutator for prizeValue
     * @param unsigned int value
     */
    void setPrizeValue(unsigned int value);
    
    /**
     * Overload of == operator. This is a friend function.
     * @param Prize prize1 - The first object to compare
     * @param Prize prize2 - The second object to compare
     * @return bool - True if the objects have the same values, otherwise false
     */
    friend bool operator ==(Prize prize1, Prize prize2);
    
    
    private:
    
    string prizeName_;
    
    unsigned int prizeValue_;
    
};

class Box
{
    public:
    
    /**
     * Default Constructor for Box
     * sets variables to default values
     * boxNumber_ == 0
     * boxColor_ = "NO COLOR"
     * prizeCapacity_ = 5
     * prizeCount_ = 0
     * prizes[prizeCapacity]
     */
    Box();
     
    /**
     * Overloaded Constructor for Box
     * sets variables to parameters
     * initialzes array with size capacity
     * @param unsigned int number
     * @param string color
     * @param unsigned int capacity
     */
    Box(unsigned int number, string color, 
        unsigned int capacity, unsigned int count = 0);
            
    /**
     * Destructor for Box
     * frees memory associated with prizes
     */
    ~Box();
        
    /**
     * Accessor for boxNumber
     * @return boxNumber_
     */
     unsigned int getBoxNumber();
     
    /**
     * Accessor for boxColor
     * @return boxColor
     */
    string getBoxColor();
       
    /**
     * Accessor for prizeCapacity
     * @return prizeCapacity_;
     */
    unsigned int getPrizeCapacity();
        
    /**
     * Accessor for prizeCount
     * @return prizeCount_
     */
    unsigned int getPrizeCount();
         
    /**
     * Mutator for boxNumber
     * sets boxNumber to parameter
     * @param unsigned int number
     */
    void setBoxNumber(unsigned int number);
    
    /**
     * Mutator for boxColor
     * sets boxColor to parameter
     * @param string color
     */
    void setBoxColor(string color);
    
    /**
     * Adds a prize
     * to prizes array if room
     * @param Prize prize
     * @return true if completed
     * @return false if array is full
     */
    bool addPrize(Prize prize);
    
    /**
     * Gets a prize at specified index
     * returns scratch if index is invalid
     * @param unsigned int location
     * @return prizes[location]
     * @return scratch
     */
    Prize getPrize(unsigned int location);
    
    /**
     * Removes a Prize from prizes
     * if index is valid removes prize from array
     * and returns the prize
     * else returns scratch
     * @param unsigned int location
     * @return prizes[location]
     * @return scratch
     */
    Prize removePrize(unsigned int location);
         
            
    private:
    unsigned int boxNumber_;
    unsigned int prizeCapacity_;
    unsigned int prizeCount_;
    string boxColor_;
    Prize scratch_;
    Prize* prizes_;
};
#endif