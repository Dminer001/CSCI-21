/*
 * Name        : bank.h
 * Author      : Dustin Miner
 * Description : Header File for Assignment 2 bank.cpp
 * Sources     : used labs 4 and 5 for inspiration
 */


#ifndef BANK_H
#define BANK_H


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
class Bank 
{
 public:
  /*
   * Constructor #1.
   * Sets name dollars and cents to the supplied values.
   * @param string name - The name of the account defaults to empty string
   * @param int dollars - The value to set dollars_ defaults to 0
   * @param int cents - The value to set cents_ defaults to 0
   */
  Bank(string name = "", int dollars = 0, int cents = 0);
  
  Bank(int dollars, int cents);
  
/**
 * Destructor for the Bank object
 */
 virtual ~Bank();

//Accessor 1 for the bank object.dollars_
int get_dollars();

//Accessor 2 for the bank object.cents_
int get_cents();

//Accessor 3 for the bank object.name_
string get_name();

//Mutator 1 for the bank object.dollars_
void set_dollars(int dollars);

//Mutator 2 for the bank object.cents_
void set_cents(int cents);

//Mutator for the Bank object.name_

void set_name(string name);

/**
 * Deposit function for the bank object
 * @param Bank &amount - the object being modified
 * @param int dollars - the dollars to be deposited
 * @param int cents - the cents to be deposited
 */
 
void deposit(Bank &amount, int &dollars, int &cents);
 
/**
 * Withrawal function for the bank object
 * @param Bank &amount - the object to be modified
 * @param int dollars - the dollars to withdrawal
 * @param int cents - the cents to withdrawal
 */
 
void withdrawal(Bank &amount, int &dollars, int &cents);

/**
 * Transfer to Savings function
 * Transfers desired amount to savings
 * @param Bank &amount - Bank object to transfer from
 * @param dollars - dollars to transfer to savings
 * @param cents - cents to transfer to savings
 */
 void transfer_Savings(Bank &amount, int dollars, int cents);
 
 /**
  * Credit payment
  * pays desired amount to credit card
  * @param Bank &amount - Bank object to transfer from
  * @param dollars - dollar amount to pay
  * @param cents - cent amount to pay
  */
  void pay_credit(Bank &amount, int dollars, int cents);

/**
 * Outputs the bank values using stringstream
 * format $x.xx
 * @uses stingstream
 * @uses setw()
 * @uses setfill()
 * @param Bank &amount - the account to be displayed
 * @return stringstream sstream.str()
 */
friend ostream& operator <<(ostream &out, Bank &amount);

 private:
  int dollars_;
  int cents_;
  string name_;
};

//acts as an atm



#endif