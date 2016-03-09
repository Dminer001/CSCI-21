/*
 * Name        : food_item.h
 * Author      : Dustin Miner
 * Description : Header File for Topic 2 lab 4 food_item.cpp
 */


#ifndef FOODITEM_H
#define FOODITEM_H

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
 * A class to model a food item
 */
class FoodItem : public Item
{
 public:
    /*
     *Constructer for Food item
     *@param string name - the name of this food item
     *@param unisgned int value - the value of this food item
     *@param unsigned int calories - the calories for this food item
     *@param string unit_of_measure - the units of measue for this food item
     */
     FoodItem(string name = "fooditem", unsigned int value = 0, unsigned int calories = 0, 
             string unit_of_measure = "nounits", double units = 0);
     
    /*
     *Deconstructer
     *does nothing
     */
     virtual ~FoodItem();
     
    /*
     *Gets the calories of this food item
     *@return unsigned int - the calories of this food item
     */
     unsigned int calories();
     
    /*
     *Gets the unit_of_measure for this food item
     *@return string - the unit_of_measure for this food item
     */
     string unit_of_measure();
     
     /*
     *Gets the number of units of this food item
     *@return double - the number of units of this food item
     */
     double units();
     
   
    /*
     *Gets the unit_of_measure for this food item
     *@param string unit_of_measure - the unit_of_measrue for this food item
     */
     void set_unit_of_measure(string unit_of_measrue);
     
    /*
     *Sets the units of this food item
     *@param double units - the number of units for this food item
     */
     void set_units(double units);
     
     /*
     *Sets the calories of this food item
     *@param unsigned int calories - the number of calories for this food item
     */
     void set_calories(unsigned int calories);
     
      /*
       *--returns a string containing name_, value_, units_, unit_of_measure_, and calories_
       *(uses Item::ToString in its implementation)
       *units_ formatted to exactly two decimal places
       *Format -- name_, $value_, units_ unit_of_measure_, calories_ calories
       *EXAMPLE -- cookie, $1, 2.50 cookie(s), 250 calories
      */
      string ToString();
      
      private:
      unsigned int calories_;
      double units_;
      string unit_of_measure_;
};
    #endif

