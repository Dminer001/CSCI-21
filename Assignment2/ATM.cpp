/*
 * Name        : ATM.cpp
 * Author      : Dustin Miner
 * Description : Acts as atm using bank checking savings and credit
 * Sources     : topic 2 labs 4 and 5 for ispiration
 */
#include "bank.h"
#include "credit.h"
#include "checking.h"
#include "savings.h"

int main() 
{
    Bank myBank;
    Checking myChecking;
    Savings mySavings;
    Credit myCredit;
    int choice, dollars = 0, cents = 0;
    bool keepGoing = true;
    do 
    {   
        //clears screen
        #ifdef _WIN32
        std::system("cls");
        #else
        // Assume POSIX
        std::system("clear");
        #endif
        
        cout << "This is a generic atm greeting" << endl;
        cout << "what would you like to do?\n     1. View Bank Account\n     2. View Checking Account\n     3. View Credit\n     4. View Savings\n     5. Exit" << endl;
        cin >> choice;
        //switch of main screen
        switch (choice)
        {
            //bank
            case 1:
            cout << myBank;
            cout << "\nWhat would you like to do?\n     1. Deposit\n     2. Withdrawal\n     3.Transfer money into Checking\n"
                 <<"     4. Transfer money into Savings\n     5. Make a Payment towards Credit\n     6. Exit\n" << endl;
            cin >> choice;
            switch (choice)
            {
                //Bank account options
                case 1:
                //depositn into bank
                cout << "How many dollars will you be depositing?\n";
                cin >> dollars;
                cout << "\nHow many cents are you depositing?\n";
                cin >> cents;
                myBank.deposit(myBank, dollars, cents);
                cout << "Your new  " << myBank;
                break;
                
                //withdrawal form bank
                case 2:
                cout << "How many dollars will you be withdrawing?\n";
                cin >> dollars;
                cout << endl;
                cout << "How many cents are you withdrawing?\n";
                cin >> cents;
                myBank.withdrawal(myBank, dollars, cents);
                cout << "Your new  " << myBank;
                break;
                
                //transfer into checking
                case 3:
                cout << "How many dollars will you be transfering?\n";
                cin >> dollars;
                cout << endl;
                cout << "How many cents are you transfering?\n";
                cin >> cents;
                myChecking.transfer_from_Bank(myChecking, myBank, dollars, cents);
                cout << "Your new  " << myBank;
                cout << "\n Your new " << myChecking;
                break;
                
                //transfer money into savings
                case 4:
                cout << "How many dollars will you be transfering?\n";
                cin >> dollars;
                cout << endl;
                cout << "How many cents are you transfering?\n";
                cin >> cents;
                mySavings.transfer_from_Bank(mySavings, myBank, dollars, cents);
                cout << "Your new  " << myBank;
                cout << "\n Your new " << mySavings;
                break;
                
                //Credit payment
                case 5:
                cout << "How many dollars will you be paying?\n";
                cin >> dollars;
                cout << endl;
                cout << "How many cents are you paying?\n";
                cin >> cents;
                myCredit.payment(myCredit, myBank, dollars, cents);
                cout << "Your new  " << myBank;
                cout << "\n Your new " << myCredit;
                break;
                
                //exit 
                case 6:
                keepGoing = false;
                break;
                }
            break;
            
            //Checking
            case 2:
            cout << myChecking;
            cout << "\nWhat would you like to do?\n     1. Deposit\n     2. Withdrawal\n     3. Exit\n";
            cin >> choice;
            switch (choice)
            {
                //checking account options
                case 1:
                //deposit into checking
                cout << "How many dollars will you be depositing?\n";
                cin >> dollars;
                cout << "\nHow many cents are you depositing?\n";
                cin >> cents;
                myChecking.deposit(myChecking, dollars, cents);
                cout << "Your new  " << myChecking;
                break;
            
                //withdrawal form checking
                case 2:
                cout << "How many dollars will you be withdrawing?\n";
                cin >> dollars;
                cout << endl;
                cout << "How many cents are you withdrawing?\n";
                cin >> cents;
                myChecking.withdrawal(myChecking, dollars, cents);
                cout << "Your new  " << myChecking;
                break;
            
                //Exit
                case 3:
                keepGoing = false;
                break;
            }
                     
            //Credit options         
            case 3:
            cout << myCredit;
            cout << "\nWhat would you like to do?\n     1. Charge\n     2. Exit\n";
            cin >> choice;
            switch (choice)
            {
                //Charge to card
                case 1:
                cout << "How many dollars will you be charging?\n";
                cin >> dollars;
                cout << "\nHow many cents are you charging?\n";
                cin >> cents;
                myCredit.charge(myCredit, dollars, cents);
                cout << "Your new  " << myCredit;
                break;
                     
                //exit
                case 2:
                keepGoing = false;
                break;
            }
            break;
            
            //Savings
            case 4:
            cout << mySavings;
            cout << "\nWhat would you like to do?\n     1. Deposit\n     2. Withdrawal\n     3. Exit\n";
            cin >> choice;
            switch (choice)
            {
                //Savings account options
                case 1:
                //deposit into checking
                cout << "How many dollars will you be depositing?\n";
                cin >> dollars;
                cout << "\nHow many cents are you depositing?\n";
                cin >> cents;
                mySavings.deposit(mySavings, dollars, cents);
                cout << "Your new  " << mySavings;
                break;
                 
                //withdrawal from savings
                case 2:
                cout << "How many dollars will you be withdrawing?\n";
                cin >> dollars;
                cout << endl;
                cout << "How many cents are you withdrawing?\n";
                cin >> cents;
                mySavings.withdrawal(mySavings, dollars, cents);
                cout << "Your new  " << mySavings;
                break;
                 
                //Exit
                case 3:
                keepGoing = false;
                break; 
            }
            break;
            
            //exit
            case 5:
            keepGoing = false;
            break;
        
    }
    }while (keepGoing);
    return 0;
    
}