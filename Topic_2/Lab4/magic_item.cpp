  /*
 * Name        : magic_item.cpp
 * Author      : Dustin Miner
 * Description : implementation File for Topic 2 lab 4 magic_item.h
 */
 #include "magic_item.h"
 
 
 /*
     *Constructer for magic item
     *@param string name - the name of this magic item defaults to "magicitem"
     *@param unsigned int value - the value of this magic item defaults to 0
     *@param unsigned int mana_required - the mana required to use this item
     *@param string description - the description of this magic item defaults to "no description"
     */
     MagicItem::MagicItem(string name, unsigned int value, string description, unsigned int mana_required)
     {
         Item::set_name(name);
         Item::set_value(value);
         mana_required_ = mana_required;
         description_ = description;
     }
     
    /*
     *Deconstructer
     *does nothing
     */
     MagicItem::~MagicItem()
     {
      
     }
     
    /*
     *Gets the mana requirement of this magic item
     *@return unsigned int - the  mana required for this magic item
     */
     unsigned int MagicItem::mana_required()
     {
         return mana_required_;
     }
     
    /*
     *Gets the description for this magic item
     *@return string - the description for this magic item
     */
     string MagicItem::description()
     {
         return description_;
     }
     
    /*
     *Sets the description for this magic item
     *@param string description - the description for this magic item
     */
     void MagicItem::set_description(string description)
     {
         description_ = description;
     }
     
    /*
     *Sets the mana required for this magic item
     *@param unsigned int mana_required - the description for this magic item
     */
     void MagicItem::set_mana_required(unsigned int mana_required)
     {
         mana_required_ = mana_required;
     }
     
     
    
     /*
      *--returns a string containing name_, value_, description_, and mana_required_
      *(uses Item::ToString in its implementation)
      *Format -- name_, $value_, description_, requires mana_required_ mana
      *EXAMPLE -- hat, $10, made of felt, requires 2 mana
      */
      string MagicItem::ToString()
      {
          stringstream sstream;
          sstream << Item::ToString() << ", " << description_ << ", requires " << mana_required_ << " mana";
          return sstream.str();
      }