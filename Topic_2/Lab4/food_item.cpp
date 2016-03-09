  /*
   * Name        : food_item.cpp
   * Author      : Dustin Miner
   * Description : implementation File for Topic 2 lab 4 food_item.h
 */
 #include "food_item.h"
 
    /*
     *Constructer for Food item
     *@param string name - the name of this food item
     *@param unisgned int value - the value of this food item
     *@param unsigned int calories - the calories for this food item
     *@param string unit_of_measure - the units of measue for this food item
     */
     FoodItem::FoodItem(string name, unsigned int value, unsigned int calories,
              string unit_of_measure, double units)
     {
         Item::set_name(name);
         Item::set_value(value);
         calories_ = calories;
         unit_of_measure_ = unit_of_measure;
         units_ = units;
     }
     
    /*
     *Deconstructer
     *does nothing
     */
     FoodItem::~FoodItem()
     {
      
     }
     
    /*
     *Gets the calories of this food item
     *@return unsigned int - the calories of this food item
     */
     unsigned int FoodItem::calories()
     {
         return calories_;
     }
     
    /*
     *Gets the unit_of_measure for this food item
     *@return string - the unit_of_measure for this food item
     */
     string FoodItem::unit_of_measure()
     {
         return unit_of_measure_;
     }
     
     /*
     *Gets the number of units of this food item
     *@return double - the number of units of this food item
     */
     double FoodItem::units()
     {
         return units_;
     }
     
   
    /*
     *Sets the unit_of_measure for this food item
     *@param string unit_of_measure - the unit_of_measure for this food item
     */
     void FoodItem::set_unit_of_measure(string unit_of_measure)
     {
         unit_of_measure_ = unit_of_measure;
     }
     
    /*
     *Sets the units of this food item
     *@param double units - the number of units for this food item
     */
     void FoodItem::set_units(double units)
     {
         units_ = units;
     }
     
    /*
     *Sets the calories of this food item
     *@param unsigned int calories - the number of calories for this food item
     */
     void FoodItem::set_calories(unsigned int calories)
     {
         calories_ = calories;
     }
     
      /*
       *--returns a string containing name_, value_, units_, unit_of_measure_, and calories_
       *(uses Item::ToString in its implementation)
       *units_ formatted to exactly two decimal places
       *Format -- name_, $value_, units_ unit_of_measure_, calories_ calories
       *EXAMPLE -- cookie, $1, 2.50 cookie(s), 250 calories
      */
      string FoodItem::ToString()
      {
          stringstream sstream;
           sstream.setf(std::ios::fixed|std::ios::showpoint); // Magic formula for precision and whatnot
           sstream.precision(2);
          sstream << Item::ToString() << ", " <<  units_ << " " << unit_of_measure_ << ", " << 
          calories_ << " calories";
          return sstream.str();
      }