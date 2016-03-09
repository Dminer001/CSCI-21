/*
 * Name        : magic_item.h
 * Author      : Dustin Miner
 * Description : Header File for Topic 2 lab 4 magic_item.cpp
 */


#ifndef MAGICITEM_H
#define MAGICITEM_H

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
 * A class to model a magic item
 */
class MagicItem : public Item {
 public:
    /*
     *Constructer for magic item
     *@param string name - the name of this magic item defaults to "magicitem"
     *@param unsigned int value - the value of this magic item defaults to 0
     *@param unsigned int mana_required - the mana required to use this item
     *@param string description - the description of this magic item defaults to "no description"
     */
     MagicItem(string name = "magicitem", unsigned int value = 0, string description = "no description",
               unsigned int mana_required = 0);
     
    /*
     *Deconstructer
     *does nothing
     */
     virtual ~MagicItem();
     
    /*Gets the mana required fot this item
     *@return unsigned int - mana_required
     */
     unsigned int mana_required();
     
    /*
     *Gets the description for this magic item
     *@return string - the description for this magic item
     */
     string description();
     
    /*
     *Sets the description for this magic item
     *@param string description - the description for this magic item
     */
     void set_description(string description);
     
    /*
     *Sets the mana required for this item
     *@param unisgned int mana_required
     */
     void set_mana_required(unsigned int mana_required);
     /*
      *--returns a string containing name_, value_, description_, and mana_required_
      *(uses Item::ToString in its implementation)
      *Format -- name_, $value_, description_, requires mana_required_ mana
      *EXAMPLE -- hat, $10, made of felt, requires 2 mana
      */
      string ToString();
    
    private:
    string description_;
    unsigned int mana_required_;
};
    #endif
