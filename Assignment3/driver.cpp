/*
 * Name        : driver.cpp
 * Author      : Dustin Miner
 * Description : Main for assignment 3
 */
 #include "prize.h"
 
 
 int main()
 {

     string name = "", color = "", cont = "";
     bool keepGoing = true;
     unsigned int  prizeNum = 0, value = 0,
                   choice = 0, number = 0;
     
     cout << "Setting up prize boxes are we?" << endl;
    // cout << "How many baxes are you making?" << endl;
   //  cin >> amount;
    // for (int i = 1; i < amount; i++)
     
        // j = i;
       //  Box j;
         //clears screen not 100% sure it works for all systems "borrowed" from one of luke's old labs
         #ifdef _WIN32
         std::system("cls");
         #else
         // Assume POSIX
         std::system("clear");
         #endif
         cout << "What is the box number?\n";
         cin >> number;
         cout << "What color would you like the box to be?" << endl;
         cin >> color;
         cout << "How many prizes do you want to cram in the box?" << endl;
         cin >> prizeNum;
         Box myBox(number, color , prizeNum);
         cout << "Heres the box" << endl;
         cout << "Box number: " << myBox.getBoxNumber() << " Box color: " << myBox.getBoxColor()
         << " Box prize capacity " << myBox.getPrizeCapacity() << endl;
         cout << "Enter any key to continue\n";
         cin >> cont;
         
     
     do
     {
         //clears screen not 100% sure it works for all systems "borrowed" from one of luke's old labs
         #ifdef _WIN32
         std::system("cls");
         #else
         // Assume POSIX
         std::system("clear");
         #endif
         
         cout << "What would you like to do with the box?\n"
         << "1. View box attributes\n"
         << "2. Change box attributes\n"
         << "3. View the contents of the box\n"
         << "4. Change the contents of the box\n"
         << "5. Quit\n" << endl;
         cin >> choice;
         switch (choice)
         {
             case 1:
             cout << "Box number: " << myBox.getBoxNumber() << " Box color: " << myBox.getBoxColor()
             << " Box prize capacity " << myBox.getPrizeCapacity() << endl;
             cout << "Enter any key to continue\n";
             cin >> cont;
             break;
             
             case 2:
             cout << "What would you like to change?\n"
             << "1. Box number\n"
             << "2. Box color\n";
             cin >> choice;
             switch (choice)
             {
                 case 1:
                 cout << "what number would you like to change it to?\n";
                 cin >> number;
                 myBox.setBoxNumber(number);
                 cout << "The new Box number is " << myBox.getBoxNumber() << endl;
                 break;
                 
                 case 2:
                 cout << "What color would you like to change it to?\n";
                 cin >> color;
                 myBox.setBoxColor(color);
                 cout << "The new box color is " << color << endl;
                 break;
             }
             break;
             
             case 3:
             for (unsigned int i = 0; i < myBox.getPrizeCount(); i++)
             {
                 cout << "Prize " <<  i + 1 << " " << myBox.getPrize(i).getPrizeName() << " Value $" << myBox.getPrize(i).getPrizeValue() << endl;
             }
             cout << "Enter any key to continue\n";
             cin >> cont;
             break;
             
             case 4:
             cout << "what would you like to do?\n"
             << "1. Add a prize\n"
             << "2. Remove a prize\n";
             cin >> choice;
             
             switch (choice)
             {
                 case 1:
                 cout << "What is the name of the prize?\n";
                 cin >> name;
                 cout << " How much is it worth?\n";
                 cin >> value;
                 if (!myBox.addPrize(Prize(name,value)))
                 {
                     cout << "Sorry the box is already full\n";
                     cout << "Enter any key to continue\n";
                     cin >> cont;
                 }
                // else
                // myBox.addPrize(Prize(name, value));
                 break;
                 
                 case 2:
                 cout << "which prize would you like to remove?\n";
                 for (unsigned int i = 0; i < myBox.getPrizeCount(); i++)
                 {
                     cout << "Prize " <<  i + 1 << " " << myBox.getPrize(i).getPrizeName() 
                     << " Value $" << myBox.getPrize(i).getPrizeValue() << endl;
                 }
                 cout << "Enter a prize number\n";
                 cin >> number;
                 if (myBox.getPrize(number - 1).getPrizeValue() == 0 )
                 {
                     cout << "There isn't a prize at that location\n";
                     cout << "Enter any key to continue\n";
                     cin >> cont;
                 }
                 else
                 myBox.removePrize(number);
                 break;
             }
             break;
             
             case 5:
             keepGoing = false;
             break;
         }
             
             
             
             
         } while (keepGoing);
     cout << "GoodBye\n";
     cout << "Enter any key to continue\n";
     cin >> cont;
     return 0;
     }