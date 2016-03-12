/*
 * Name        : Bank.cpp
 * Author      : Dustin Miner
 * Description : implementation file for bank.h
 * Sources     : topic 2 labs 4 and 5 for ispiration
 */
#include "bank.h"

// Constructor for the bank object
Bank::Bank(string name, int dollars, int cents)
{
    dollars_ = dollars;
    cents_ = cents;
    name_ = name;
}

Bank::Bank(int dollars, int cents)
{
    dollars_ = dollars;
    cents_ = cents;
}

/**
 * Destructor for the Bank object
 */
 Bank::~Bank()
 {
   
 }

//Accessor 1 for the bank object.dollars_
int Bank::get_dollars()  
{
    return dollars_;
}

//Accessor 2 for the bank object.cents_
int Bank::get_cents()
{
    return cents_;
}

//Accessor 3 for the bank object.name_
string Bank::get_name()
{
    return name_;
}

//Mutator 1 for the bank object.dollars_
void Bank::set_dollars(int dollars) 
{
  dollars_ = dollars;
}

//Mutator 2 for the bank object.cents_
void Bank::set_cents(int cents) 
{
  cents_ = cents;
}

//Mutator for the Bank object.name_

void Bank::set_name(string name)
{
  name_ = name;
}

/**
 * Deposit function for the bank object
 * @param int dollars - the dollars to be deposited
 * @param int cents - the cents to be deposited
 */
 
void Bank::deposit(Bank &amount, int &dollars, int &cents) 
 {
     //modifies variables
     amount.dollars_ += dollars;
     amount.cents_ += cents;
     //checks if cents add makes full dollar then adjusts values accordingly
     if (amount.cents_ > 99)
     {
         amount.dollars_ += amount.cents_ / 100;
         amount.cents_ = amount.cents_ % 100;
    }
 }
 
/**
 * Withrawal function for the bank object
 * @param int dollars - the dollars to withdrawal
 * @param int cents - the cents to withdrawal
 */
 
void Bank::withdrawal(Bank &amount, int &dollars, int &cents)
{
    //modifies variabls desired amount
    amount.dollars_ -= dollars;
    amount.cents_ -= cents;
    //checks if cents remeved a full dollar then adjusts accordingly
    if (amount.cents_ < 0)
    {
      amount.dollars_ -= 1;
      amount.cents_ = amount.cents_ % 100;
    }
}

/**
 * Outputs the bank values using stringstream
 * format $x.xx
 * @uses stingstream
 * @uses setw()
 * @uses setfill()
 * @param Bank amount - the account to be changed
 * @param dollars - the amount of dollars to add
 * @param cents - the amount of cents to add
 */
ostream& operator <<(ostream &out, Bank &amount)
{
    
    int abs_cents = abs(amount.cents_);
  //checks for negative with 0 dollars then adds - in front of dollars
  if ((amount.dollars_ == 0) && (amount.cents_ < 0))
  {
      //populates the stream with info
      out << "Account Balance: " << "$-" << setw(1) << setfill('0') << amount.dollars_ << '.' 
            << setfill('0') << setw(2) << abs_cents << endl;
  } else
  {
      //populates the stream with info
      out << "Account Balance: " << '$' << setw(1) << setfill('0') << amount.dollars_ << '.' 
            << setfill('0') << setw(2) << abs_cents << endl;
  }
  return out;
    
}
  
  
  
  
  
