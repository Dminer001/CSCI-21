/*
 * Name        : checking.h
 * Author      : Dustin Miner
 * Description : Header File for Assignment 2 checking.cpp
 * Sources     : used topic 2 labs 4 and 5 for inspiration
 */


#ifndef Checking_H
#define Checking_H

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
class Checking : public Bank
{
 public:
  /*
   * Constructor #1.
   * Sets name dollars and cents to the supplied values.
   * @inherits name from Bank
   * @param int dollars - The value to set dollars_ defaults to 0
   * @param int cents - The value to set cents_ defaults to 0
   */
  Checking(int dollars = 0, int cents = 0);
  
/**
 * Destructor for the Checking object
 */
 virtual ~Checking();

//Accessor 1 for the Checking object.dollars_
int get_dollars();

//Accessor 2 for the Checking object.cents_
int get_cents();

//Accessor 3 for the Checking object.name_
string get_name();

//Mutator 1 for the Checking object.dollars_
void set_dollars(int dollars);

//Mutator 2 for the Checking object.cents_
void set_cents(int cents);

//Mutator for the Checking object.name_

void set_name(string name);

/**
 * Deposit function for the Checking object
 * @param Checking &amount - the object being modified
 * @param int dollars - the dollars to be deposited
 * @param int cents - the cents to be deposited
 */
 
void deposit(Checking &amount, int &dollars, int &cents);
 
/**
 * Withrawal function for the Checking object
 * @param Checking &amount - the object to be modified
 * @param int dollars - the dollars to withdrawal
 * @param int cents - the cents to withdrawal
 */
 
void withdrawal(Checking &amount, int &dollars, int &cents);

/**
 * Transfer to Bank function
 * Transfers desired amount to Bank
 * @param Checking &amount - Checking object to transfer from
 * @param dollars - dollars to transfer to Bank
 * @param cents - cents to transfer to Bank
 */
 void transfer_to_Bank(Checking &amount, Bank &amount2, int &dollars, int &cents);
 
 /**
 * Transfer to Bank function
 * Transfers desired amount to bank
 * @param Checking amount - Checking object to transfer from
 * @param dollars - dollars to transfer to Checking
 * @param cents - cents to transfer to Checking
 */
 void transfer_from_Bank(Checking &amount, Bank &amount2, int &dollars, int &cents);
 


/**
 * Outputs the Checking values using stringstream
 * format $x.xx
 * @uses stingstream
 * @uses setw()
 * @uses setfill()
 * @param Checking &amount - the account to be displayed
 * @return stringstream sstream.str()
 */
friend ostream& operator <<(ostream &out, Checking &amount);

 private:
  int dollars_;
  int cents_;
  string name_;
};


#endif