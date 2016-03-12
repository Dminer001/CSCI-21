/*
 * Name        : credit.cpp
 * Author      : Dustin Miner
 * Description : implementation file for credit.h
 * Sources     : used Topic 2 labs 4 and 5 for inspiration
 */
#include "credit.h"


  /*
   * Constructor #1.
   * Sets name dollars and cents to the supplied values.
   * @inherits name from Credit
   * @param int dollars - The value to set dollars_ defaults to 0
   * @param int cents - The value to set cents_ defaults to 0
   */
  Credit::Credit(int dollars, int cents)
  {
      name_ = Bank::get_name();
      dollars_ = dollars;
      cents_ = cents;
  }
  
/**
 * Destructor for the Credit object
 */
 Credit::~Credit()
 {
     
 }

//Accessor 1 for the Credit object.dollars_
int Credit::get_dollars()  
{
    return dollars_;
}

//Accessor 2 for the Credit object.cents_
int Credit::get_cents()
{
    return cents_;
}

//Accessor 3 for the Credit object.name_
string Credit::get_name()
{
    return name_;
}

//Accessor for the Credit Balance


//Mutator 1 for the Credit object.dollars_
void Credit::set_dollars(int dollars) 
{
  dollars_ = dollars;
}

//Mutator 2 for the Credit object.cents_
void Credit::set_cents(int cents) 
{
  cents_ = cents;
}

//Mutator for the Credit object.name_

void Credit::set_name(string name)
{
  name_ = name;
}

/**
 * Deposit function for the Credit object
 * @param int dollars - the dollars to be deposited
 * @param int cents - the cents to be deposited
 */
 
void Credit::charge(Credit &amount, int dollars, int cents) 
 {
     //modifies variables
     amount.dollars_ += dollars;
     amount.cents_ += cents;
     //checks if cents makes full dollars and adjusts accordingly
     if (amount.cents_ > 99)
     {
         amount.dollars_ += amount.cents_ / 100;
         amount.cents_ = amount.cents_ % 100;
     } else
     {
         if (amount.cents_ < 0)
    {
      amount.dollars_ -= 1;
      amount.cents_ = amount.cents_ % 100;
    }
     }
 }
 
/**
 * Withrawal function for the Credit object
 * @param int dollars - the dollars to withdrawal
 * @param int cents - the cents to withdrawal
 */
 
void Credit::payment(Credit &amount, Bank &amount2, int dollars, int cents)
{
    //modifies variables
    amount.dollars_ -= dollars;
    amount.cents_ -= cents;
    Bank::withdrawal(amount2, dollars, cents);
}

/**
 * Outputs the Credit values using stringstream
 * format $x.xx
 * @uses stingstream
 * @uses setw()
 * @uses setfill()
 * @param Credit amount - the account to be changed
 * @param dollars - the amount of dollars to add
 * @param cents - the amount of cents to add
 */
ostream& operator <<(ostream &out, Credit &amount)
{
    int abs_cents = abs(amount.cents_);
    //checks for negative with 0 dollars then adds - in front of dollars
    if ((amount.dollars_ == 0) && (amount.cents_ < 0))
    {
        //populates stream with data
        out << "Credit Balance: " << "$-" << setw(1) << setfill('0') << amount.dollars_ << '.' 
                << setfill('0') << setw(2) << abs_cents << endl;
        
    } else
    {
        //populates stream with data
        out << "Credit Balance " << '$' << setw(1) << setfill('0') << amount.dollars_ << '.' 
                << setfill('0') << setw(2) << abs_cents << endl;
    }
    return out;    
}