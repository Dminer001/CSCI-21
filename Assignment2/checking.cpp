/*
 * Name        : checking.cpp
 * Author      : Dustin Miner
 * Description : implementation file for checking.h
 * Sources     : used Topic 2 labs 4 and 5 for inspiration
 */
#include "checking.h"


  /*
   * Constructor #1.
   * Sets name dollars and cents to the supplied values.
   * @inherits name from Bank
   * @param int dollars - The value to set dollars_ defaults to 0
   * @param int cents - The value to set cents_ defaults to 0
   */
  Checking::Checking(int dollars, int cents)
  {
      name_ = Bank::get_name();
      dollars_ = dollars;
      cents_ = cents;
  }
  
/**
 * Destructor for the Checking object
 */
 Checking::~Checking()
 {
     
 }

//Accessor 1 for the Checking object.dollars_
int Checking::get_dollars()  
{
    return dollars_;
}

//Accessor 2 for the Checking object.cents_
int Checking::get_cents()
{
    return cents_;
}

//Accessor 3 for the Checking object.name_
string Checking::get_name()
{
    return name_;
}

//Mutator 1 for the Checking object.dollars_
void Checking::set_dollars(int dollars) 
{
  dollars_ = dollars;
}

//Mutator 2 for the Checking object.cents_
void Checking::set_cents(int cents) 
{
  cents_ = cents;
}

//Mutator for the Checking object.name_

void Checking::set_name(string name)
{
  name_ = name;
}

/**
 * Deposit function for the Checking object
 * @param int dollars - the dollars to be deposited
 * @param int cents - the cents to be deposited
 */
 
void Checking::deposit(Checking &amount, int &dollars, int &cents) 
 {
     //adds to the object variables
     amount.dollars_ += dollars;
     amount.cents_ += cents;
     
     //checks if cents made a full dollar then changes dollars and cents accordingly
     if (amount.cents_ > 99)
    {
      amount.dollars_ += amount.cents_ / 100;
      amount.cents_ = amount.cents_ % 100;
    }
 }
 
/**
 * Withrawal function for the Checking object
 * @param int dollars - the dollars to withdrawal
 * @param int cents - the cents to withdrawal
 */
 
void Checking::withdrawal(Checking &amount, int &dollars, int &cents)
{
    //Subtracts from dollars and cents
    amount.dollars_ -= dollars;
    amount.cents_ -= cents;
    //checks if cents became negative then adjusts dollars and cents accordingly
    if (amount.cents_ < 0)
    {
      amount.dollars_ -= 1;
      amount.cents_ = amount.cents_ % 100;
    }
}

/**
 * Transfer to Bank function
 * Transfers desired amount to bank
 * @param Checking amount - Checking object to transfer from
 * @param dollars - dollars to transfer from Checking
 * @param cents - cents to transfer from Checking
 */
 void Checking::transfer_to_Bank(Checking &amount, Bank &amount2, int &dollars, int &cents)
 {
     //calls withdrawal to deduct amount
     withdrawal(amount, dollars, cents);
     //calls banks deposit function to add the funds to the bank object
     Bank::deposit(amount2, dollars, cents);
 }
 
 /**
 * Transfer from Bank function
 * Transfers desired amount from bank
 * @param Checking amount - Checking object to transfer to
 * @param dollars - dollars to transfer to Checking
 * @param cents - cents to transfer to Checking
 */
 void Checking::transfer_from_Bank(Checking &amount, Bank &amount2, int &dollars, int &cents)
 {
     //calls withdrawal to deduct amount
     deposit(amount, dollars, cents);
     //calls banks deposit function to add the funds to the bank object
     Bank::withdrawal(amount2, dollars, cents);
 }
 
/**
 * Outputs the Checking values using stringstream
 * format $x.xx
 * @uses stingstream
 * @uses setw()
 * @uses setfill()
 * @param Checking amount - the account to be changed
 * @param dollars - the amount of dollars to add
 * @param cents - the amount of cents to add
 */
ostream& operator <<(ostream &out, Checking &amount)
{
    
    int abs_cents = abs(amount.cents_);
    //checks for negative with 0 dollars then adds - in front of dollars
    if ((amount.dollars_ == 0) && (amount.cents_ < 0))
    {
        //Populates the stream with info
        out << "Checking Balance: " << "$-" << setw(1) << setfill('0') << amount.dollars_ << '.' 
                << setfill('0') << setw(2) << abs_cents;
    } else
    {
        //populates the stream with info
        out << "Checking Balance" << '$' << setw(1) << setfill('0') << amount.dollars_ << '.' 
                << setfill('0') << setw(2) << abs_cents;
    }
   return out;
    
}