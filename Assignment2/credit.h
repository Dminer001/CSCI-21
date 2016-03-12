/*
 * Name        : Credit.h
 * Author      : Dustin Miner
 * Description : Header File for Assignment 2 Credit.cpp
 * Sources     : used labs 4 and 5 for inspiration
 */


#ifndef Credit_H
#define Credit_H

#include "bank.h"
#include <iostream>
#include <string>
#include <sstream>
#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <ctype.h>
using namespace std;

/*
 * Class Item.
 * A class to model a simple item
 */
class Credit : public Bank
{
 public:
  /*
   * Constructor #1.
   * Sets name dollars and cents to the supplied values.
   * @inherits name from bank
   * @param int dollars - The value to set dollars_ defaults to 0
   * @param int cents - The value to set cents_ defaults to 0
   */
  Credit(int dollars = 0, int cents = 0);
  
/**
 * Destructor for the Credit object
 */
 virtual ~Credit();

//Accessor 1 for the Credit object.dollars_
int get_dollars();

//Accessor 2 for the Credit object.cents_
int get_cents();

//Accessor 3 for the Credit object.name_
string get_name();

//Mutator 1 for the Credit object.dollars_
void set_dollars(int dollars);

//Mutator 2 for the Credit object.cents_
void set_cents(int cents);

//Mutator for the Credit object.name_

void set_name(string name);

/**
 * Payment function for the Credit object
 * @param Credit &amount - the object being modified
 * @param int dollars - the dollars to be deposited
 * @param int cents - the cents to be deposited
 */
 
void payment(Credit &amount, Bank &amount2, int dollars, int cents);
 
/**
 * Charge function for the Credit object
 * @param Credit &amount - the object to be modified
 * @param int dollars - the dollars to withdrawal
 * @param int cents - the cents to withdrawal
 */
 
void charge(Credit &amount, int dollars, int cents);

/**
 * Outputs the Credit values using stringstream
 * format $x.xx
 * @uses stingstream
 * @uses setw()
 * @uses setfill()
 * @param Credit &amount - the account to be displayed
 * @return stringstream sstream.str()
 */
friend ostream& operator <<(ostream &out, Credit &amount);
 private:
  int dollars_;
  int cents_;
  string name_;
};


#endif