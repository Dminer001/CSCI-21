/*
 * Name        : lab_12.cpp
 * Author      : Dustin Miner
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "lab_12.h"

// CODE HERE -- FUNCTION DEFINITIONS
/*
 * Allocate memory for a dynamic array of integers.
 * @param unsigned int size - The desired size of the dynamic array
 * @return int* - A pointer to the newly allocated integer array
 */
int* MakeDynoIntArray(unsigned int size)
{
    int* my_array = new int[size];
    return my_array;
}

/*
 * Compute the sum of an array.
 * @param int* the_array - The array for which the sum will be computed
 * @param unsigned int array_size - The size of the_array
 * @return int - An integer containing the sum of the array
 * @throw The message "NULL ARRAY REFERENCE" if the_array is NULL
 *        Syntax: throw "The Message to throw";
 */
int Sum(int* the_array, unsigned int array_size)
{
    //creates sum to add to
    int sum = 0;
    
     /**
     * checks if NULL and throws null message
     */
      if (the_array == NULL)
    {
        throw "NULL ARRAY REFERENCE";
    } else {
    
    //loops through supplied integer array and adds the values
    for (int i = 0; i < array_size; i++)
    {
        sum += the_array[i];
    }
    
    return sum;
    }
}

/*
 * Identify the max value in an array.
 * @param int* the_array - The array for which the max value will be identified
 * @param unsigned int array_size - The size of the_array
 * @return int - An integer containing the max value of the array
 * @throw The message "NULL ARRAY REFERENCE" if the_array is NULL
 *        Syntax: throw "The Message to throw";
 */
int Max(int* the_array, unsigned int array_size)
{
    
    
    /**
     * checks if NULL and throws null message
     */
      if (the_array == NULL)
    {
        throw "NULL ARRAY REFERENCE";
    } else {
        
        /**
     * creates a variable to hold the max number in the array_size
     * begins as first value in array
     */
    int max = the_array[0];
        
    /**
     * loops through the array and finds the element with the largest
     * value and stores that value in max
     */
    for (int i = 0; i < array_size; i++)
    {
        if (max < the_array[i])
        max = the_array[i];
    }
   
    return max;
    }
}

/*
 * Identify the min value in an array.
 * @param int* the_array - The array for which the min value will be identified
 * @param unsigned int array_size - The size of the_array
 * @return int - An integer containing the min value of the array
 * @throw The message "NULL ARRAY REFERENCE" if the_array is NULL
 *        Syntax: throw "The Message to throw";
 */
int Min(int* the_array, unsigned int array_size)
{
     
    
     /**
     * checks if NULL and throws null message
     */
      if (the_array == NULL)
    {
        throw "NULL ARRAY REFERENCE";
    } else {
        
    //creates a variable to hold the min number in the array
    int min = the_array[0];
    
    /**
     * loops through the array and finds the element with the smallest
     * value and stores that value in min
     */
    for (int i = 0; i < array_size; i++)
    {
        if (min > the_array[i])
        min = the_array[i];
    }

    return min;
    }
}