/*
 * Name        : item.h
 * Author      : Dustin Miner
 * Description : Header File for Topic 2 lab 4 item.cpp
 */


#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <sstream>
#include "item.h"
#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <ctype.h>
using std::string;
using std::stringstream;


/*
 * Class Item.
 * A class to model a simple item
 */
class Item {
 public:
  /*
   * Constructor for Item.
   * @param string name - The name for this item defaults to item
   * @param int value - The value for this item defaults to 0
   */
   Item(string name = "item",unsigned int value = 0);

  /*
   * Deconstructer
   *does nothing
   */
   virtual ~Item();
  
  /*
   *Gets the name of the item
   *return string - The name of this item
   */
   string name();
   
   /*
   *Gets the value of the item
   *return string - The name of this item
   */
   unsigned int value();
   
  /*
   *Sets the name of this item
   *@param string name - The name for this item
   */
   void set_name(string name);
  
  /*
   *sets the value of the item
   *@param insigned int value - the value of this item
   */
   void set_value(unsigned int value);
   
   /*
    *--returns a string containing name_ and value_
    *Format -- name_, $value_
    *EXAMPLE -- shoes, $25
    *
    */
    string ToString();

 private:
  string name_;
  unsigned int value_;
};

#endif
