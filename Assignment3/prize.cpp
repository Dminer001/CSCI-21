/*
 * Name        : prize.cpp
 * Author      : Dustin Miner
 * Description : Class implementation File
 */
 #include "prize.h"
 
 
 
/**
 * Default constructor
 * initializes prizeName and prizeValue
 * prizeName = "NO NAME"
 * prizeValue = 0
 */
Prize::Prize()
{
    prizeName_ = "NO NAME";
    prizeValue_ = 0;
}
    
/**
 * Overloaded construcor
 * sets variables to parameters
 * @param string name
 * @param unsigned int value
 */
Prize::Prize(string name, unsigned int value)
{
    prizeName_ = name;
    prizeValue_ = value;
}
 
/**
 * Destructor
 * empty does nothing
 */
Prize::~Prize()
{
    
}
     
/**
 * Accossor for prizeName
 * @return prizeName_
 */
string Prize::getPrizeName()
{
    return prizeName_;
}
      
/**
 * Accossor for prizeValue
 * @return prizeValue_
 */
unsigned int Prize::getPrizeValue()
{
    return prizeValue_;
}

/**
 * Mutator for prizeName
 * @param string name
 */
void Prize::setPrizeName(string name)
{
    prizeName_ = name;
}

/**
 * Mutator for prizeValue
 * @param unsigned int value
 */
void Prize::setPrizeValue(unsigned int value)
{
    prizeValue_ = value;
}

/**
 * Overload of == operator. This is a friend function.
 * @param Prize prize1 - The first object to compare
 * @param Prize prize2 - The second object to compare
 * @return bool - True if the objects have the same values, otherwise false
 */
bool operator ==( Prize prize1, Prize prize2)
{
    if (prize1.getPrizeValue() == prize2.getPrizeValue() && 
        prize1.getPrizeName() == prize2.getPrizeName())
    return true;
    else 
    return false;
}


/**
 * Default Constructor for Box
 * sets variables to default values
 * boxNumber_ = 0
 * boxColor_ = "NO COLOR"
 * prizeCapacity_ = 5
 * prizeCount_ = 0
 * prizes[prizeCapacity]
 */
Box::Box()
{
    boxNumber_ = 0;
    boxColor_ = "NO COLOR";
    prizeCapacity_ = 5;
    prizeCount_ = 0;
    prizes_ = new Prize[prizeCapacity_];
    for (int i = 0; i < prizeCapacity_; i++)
    {
        prizes_[i] = scratch_;
    }
  //  scratch_.setPrizeName("scratch");
  //  scratch_.setPrizeValue(0);
}
 
/**
 * Overloaded Constructor for Box
 * sets variables to parameters
 * initialzes array with size capacity
 * @param unsigned int number
 * @param string color
 * @param unsigned int capacity
 */
Box::Box(unsigned int number, string color, 
         unsigned int capacity, unsigned int count)
{
    boxNumber_ = number;
    boxColor_ = color;
    prizeCapacity_ = capacity;
    prizeCount_ = count;
    prizes_ = new Prize[capacity];
    for (int i = 0; i < prizeCapacity_ -1; i++)
    {
        prizes_[i] = scratch_;
    }
  //  scratch_.setPrizeName("scratch");
  //  scratch_.setPrizeValue(0);
}
         

/**
 * Destructor for Box
 * frees memory associated with prizes
 */
Box::~Box()
{
    delete[] prizes_;
}
        
/**
 * Accessor for boxNumber
 * @return boxNumber_
 */
unsigned int Box::getBoxNumber()
{
    return boxNumber_;
}
     
/**
 * Accessor for boxColor
 * @return boxColor
 */
string Box::getBoxColor()
{
    return boxColor_;
}
       
/**
 * Accessor for prizeCapacity
 * @return prizeCapacity_;
 */
unsigned int Box::getPrizeCapacity()
{
    return prizeCapacity_;
}
        
/**
 * Accessor for prizeCount
 * @return prizeCount_
 */
unsigned int Box::getPrizeCount()
{
    return prizeCount_;
}
     
/**
 * Mutator for boxNumber
 * sets boxNumber to parameter
 * @param unsigned int number
 */
void Box::setBoxNumber(unsigned int number)
{
    boxNumber_ = number;
}
      
/**
 * Mutator for boxColor
 * sets boxColor to parameter
 * @param string color
 */
void Box::setBoxColor(string color)
{
    boxColor_ = color;
}

/**
 * Adds a prize
 * to prizes array if room
 * @param Prize prize
 * @return true if completed
 * @return false if array is full
 */
bool Box::addPrize(Prize prize)
{
    for (int i = 0; i < prizeCapacity_; i++)
    {
        if (prizes_[i] == scratch_)
        {
            prizes_[i] = prize;
            prizeCount_ +=1;
            return true;
        }
    }
    return false;
}
    
/**
 * Gets a prize at specified index
 * returns scratch if index is invalid
 * @param unsigned int location
 * @return prizes[location]
 * @return scratch
 */
Prize Box::getPrize(unsigned int location)
{
    if (prizes_[location] == scratch_)
    {
        return prizes_[location];
    }
    return prizes_[location];
}
    
/**
 * Removes a Prize from prizes
 * if index is valid removes prize from array
 * and returns the prize
 * else returns scratch
 * @param unsigned int location
 * @return prizes[location]
 * @return scratch
 */
 Prize Box::removePrize(unsigned int location)
 {
     if (prizes_[location] == scratch_)
     {
     return scratch_;
     } else
     {
         Prize prize = prizes_[location];
         prizes_[location] = scratch_;
         prizeCount_ -= 1;
         return prize;
     }
 }