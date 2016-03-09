 /*
 * Name        : item.cpp
 * Author      : Dustin Miner
 * Description : implementation File for Topic 2 lab 4 item.h
 */
 #include "item.h"
 
 
  /*
   * Constructor for Item.
   * @param string name - The name for this item defaults to item
   * @param int value - The value for this item defaults to 0
   */
  Item::Item(string name, unsigned int value)
  {
      name_ = name;
      value_ = value;
  }

  /*
   * Deconstructer
   *does nothing
   */
   Item::~Item()
   {
    
   }
  
  /*
   *Gets the name of the item
   *return string - The name of this item
   */
   string Item::name()
   {
       return name_;
   }
   
   /*
   *Gets the value of the item
   *return string - The name of this item
   */
   unsigned int Item::value()
   {
       return value_;
   }
   
  /*
   *Sets the name of this item
   *@param string name - The name for this item
   */
  void Item::set_name(string name)
  {
      name_ = name;
  }
  
  /*
   *sets the value of the item
   *@param insigned int value - the value of this item
   */
   void Item::set_value(unsigned int value)
   {
       value_ = value;
   }
   
   /*
    *--returns a string containing name_ and value_
    *Format -- name_, $value_
    *EXAMPLE -- shoes, $25
    *
    */
    string Item::ToString()
    {
        stringstream sstream;
        sstream << name() << ", " << "$" << value();
        return sstream.str();
    }
