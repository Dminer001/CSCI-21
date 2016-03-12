/*
 * Name        : savings.h
 * Author      : Dustin Miner
 * Description : Header File for Assignment 2 savings.cpp
 * Sources     : used topic 2 labs 4 and 5 for inspiration
 */


#ifndef Savings_H
#define Savings_H

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
 * A class to model a Savings item
 */
class Savings : public Bank
{
 public:
  /*
   * Constructor #1.
   * Sets name dollars and cents to the supplied values.
   * @inherits name from Bank
   * @param int dollars - The value to set dollars_ defaults to 0
   * @param int cents - The value to set cents_ defaults to 0
   */
  Savings(int dollars = 0, int cents = 0);
  
/**
 * Destructor for the Savings object
 */
 virtual ~Savings();

//Accessor 1 for the Savings object.dollars_
int get_dollars();

//Accessor 2 for the Savings object.cents_
int get_cents();

//Accessor 3 for the Savings object.name_
string get_name();

//Mutator 1 for the Savings object.dollars_
void set_dollars(int dollars);

//Mutator 2 for the Savings object.cents_
void set_cents(int cents);

//Mutator for the Savings object.name_

void set_name(string name);

/**
 * Deposit function for the Savings object
 * @param Savings &amount - the object being modified
 * @param int dollars - the dollars to be deposited
 * @param int cents - the cents to be deposited
 */
 
void deposit(Savings &amount, int dollars, int cents);
 
/**
 * Withrawal function for the Savings object
 * @param Savings &amount - the object to be modified
 * @param int dollars - the dollars to withdrawal
 * @param int cents - the cents to withdrawal
 */
 
void withdrawal(Savings &amount, int &dollars, int &cents);

/**
 * Transfer to Bank function
 * Transfers desired amount to Bank
 * @param Savings &amount - Savings object to transfer from
 * @param dollars - dollars to transfer to Bank
 * @param cents - cents to transfer to Bank
 */
 void transfer_to_Bank(Savings &amount, Bank &amount2, int &dollars, int &cents);
 
 /**
 * Transfer from Bank function
 * Transfers desired amount from Bank
 * @param Savings &amount - Savings object to transfer to
 * @param dollars - dollars to transfer from Bank
 * @param cents - cents to transfer from Bank
 */
 void transfer_from_Bank(Savings &amount, Bank &amount2, int &dollars, int &cents);

/**
 * Outputs the Savings values using stringstream
 * format $x.xx
 * @uses stingstream
 * @uses setw()
 * @uses setfill()
 * @param Savings &amount - the account to be displayed
 * @return stringstream sstream.str()
 */
friend ostream& operator <<(ostream &out, Savings &amount);

 private:
  int dollars_;
  int cents_;
  string name_;
};


#endif