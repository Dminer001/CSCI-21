/*
 * Name        : sl_list.h
 * Author      : Dustin Miner
 * Description : Header File for topic 3 lab 3
 */

#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>
#include <sstream>
#include "sl_node.h"
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
class SLList 
{

public:
/**
 * Constructor
 * sets head_ to NULL
 * sets size_ to 0
 */
SLList();
  
/**
 * Destructor
 * calls Clear()
 */
~SLList();
  
/**
 * creates a new dynamic SLNode with the contents of 
 * the parameter and attaches as the new head of the list
 * @param int head
 */
void InsertHead(int contents);

/**
 * removes the head node from the list,
 * or does nothing if the list is empty
 */
void RemoveHead();

/**
 *  clears the entire contents of the list,
 *  freeing all memory associated with all nodes
 */
void Clear();

/**
 * accessor for size_
 */
unsigned int size() const;

/**
 * returns a string representation of the contents
 * of all nodes in the list, in the format
 * NUM1, NUM2, ..., LASTNUM
 * returns the empty string on an empty list (i.e. returns "")
 */
string ToString() const;
 
private:

/**
 *  points to the first node in a singly-linked list
 */
SLNode* head_;
  
  
/**
 * stores the count of the number of nodes in the list
 */
unsigned int size_;
};

#endif