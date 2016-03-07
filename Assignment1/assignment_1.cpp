/*
 * Name        : Assignment 1
 * Author      : Dustin Miner
 * Description : Working with Strings & Arrays
 * Sources     : FILL IN
 */

#include "assignment_1.h"

// Write Function Definitions Here (What goes below main)
// Declare Function Prototypes Here (What goes above main)
/*
 *   This function will check to make sure all characters in a given string
 *   are alphabetic. It returns true if the string is all alphabetic, otherwise it 
 *   returns false. The empty string should also return false.
*/
bool CheckAlphabetic(const string& kToCheck) {
    bool isAlpha = false;
    for ( int i = 0 ; i < kToCheck.size(); i++ ) {
        if (((kToCheck.at(i) >= 65) && (kToCheck.at(i) <= 90)) ||
            ((kToCheck.at(i) >= 97) && (kToCheck.at(i) <= 122))) {
               isAlpha = true;
           } else {
               isAlpha = false;
               return isAlpha;
           }
    }
    return isAlpha;
}

/*
 * This function will count the number of words (delimited by space characters)
 * in a string. Assume the parameter will never have multiple spaces back-to-back 
 * and will never begin or end with spaces).
 */
int CountWords(string toCount) {
    int count = 1;
    char separator = ' ';
    for (int i = 0; i < toCount.length(); i++) {
        if (toCount.at(i) == ' ')
        count++;
    }
    if (toCount == "") {
        count = 0;
    }
    return count;
}

/*
 * This function will perform a Caesar Cipher Shift If the string contains anynon-alpha
 * characters do not perform the encryption and return false.
 * Otherwise perform the encryption and return true.
 */
bool EncryptString(string& toEncrypt, int shift) {
    bool complete = false;
    int i = 0;
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
                      'q','r','s','t','u','v','w','x','y','z'};
    if (CheckAlphabetic(toEncrypt)) {
        complete = true;
    }
    if (shift < 0)
    {
        shift *= -1;
        shift -=2;
    }
    for (i = 0; i < toEncrypt.length(); i++) {
        if (isupper(toEncrypt[i])) {
        toEncrypt[i] = alphabet[(toEncrypt[i] + shift + 13) % 26] - 32;
    } else {
        toEncrypt[i] = alphabet[(toEncrypt[i] + shift + 7) % 26];
    }
    }
    return complete;
}

/*
 * This function decrypts a Caesar Cipher shift. If the string contains any
 * non-alpha characters do not perform the encryption and return false.
 * Otherwise perform the encryption and return true.
*/

bool DecryptString(string& toDecrypt, int shift) {
    string decrypted = "";
    int temp;
    bool complete = false;
    if (CheckAlphabetic(toDecrypt)) 
    {
        complete = true;
    }
   
    for (int i = 0; i < toDecrypt.length(); i++)
    {
         if (isupper(toDecrypt[i]))
    {
        decrypted[i] = ((toDecrypt[i] + 13 - shift) % 26);
    } else
    {
          for (int i = 0; i < toDecrypt.length(); i++)
    {
        
        
        decrypted[i] = ((toDecrypt[i] + 7 - shift) % 26);
        
    
    }
    }
    }
    toDecrypt = decrypted;
   

 /*   bool complete = false;
    int i = 0;
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
                      'q','r','s','t','u','v','w','x','y','z'};
    if (CheckAlphabetic(toDecrypt))
    {
        complete = true;
    }
    if (shift > 999999)
    {
        shift *= -1;
        shift += 2;
    }
    
    for (i = 0; i < toDecrypt.length(); i++)
    {
        if (isupper(toDecrypt[i])) 
        {
            toDecrypt[i] = alphabet[(toDecrypt[i] - shift + 13) % 26] - 32;
        } else
        {
            toDecrypt[i] = alphabet[(toDecrypt[i] - shift + 7) % 26];
        }
    }*/
  return complete;

}

/*
 * This function will compute the mean average of the values in the array.
 * The array will always be at least size of 1.
*/

double ComputeAverage(double list[], unsigned int size) 
{
    double sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += list[i];
    }
    return sum/size;
    
}


/*
 * This function will find and return the smallest value in an array. The
 * array will always be at least of size 1.
*/

double FindMinValue(double list[], unsigned int size) {
    double smallest = list[0];
    for (int i = 0; i < size; i ++) {
        if ( list[i] < smallest ) {
            smallest = list[i];
        }
    }
    return smallest;
}


/*
 * This function will find and return the largest value in an array. The array
 * will always be at least of size 1.
*/

double FindMaxValue(double list[], unsigned int size) {
    double largest = 0;
    for (int i = 0; i < size; i ++) {
        if ( list[i] > largest ) {
            largest = list[i];
        }
    }
    return largest;

    
}