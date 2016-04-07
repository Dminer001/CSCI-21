/*
 * Name        : sl_list.h
 * Author      : Dustin Miner
 * Description : Header File for topic 3 lab 4
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
 * sets tail_ to NULL
 * sets size_ to 0
 */
SLList();
  
/**
 * Destructor
 * calls Clear()
 */
~SLList();
  
/**
 * Insert function that creates a new node and
 * inserts it in an appropriate location in the list.
 *@param int contents the contents of the new node.
 */
 
void Insert(int contents);

/**
 * Removes first occurence of the supplied data
 * @param int contents data to compare
 * traverses the list comparing contents
 * @return true if complete
 * @return false if empty or data does not exist
 */
 
 bool RemoveFirstOccurence(int contents);

/**
 * Returns the contents of the head node
 * if the list is empty returns 0
 */
 int GetHead() const;
 
/**
 * Returns the contents of the tail node
 * if the list is empty returns 0
 */
int GetTail() const;

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
 * points to the last node in the list
 */
SLNode* tail_;
  
  
/**
 * stores the count of the number of nodes in the list
 */
unsigned int size_;

/**
 * creates a new dynamic SLNode with the contents of 
 * the parameter and attaches as the new head of the list
 * @param int head
 */
void InsertHead(int contents);

/**
 * creates a new dynamic SLNode with the contents of 
 * the parameter and attaches as the new tail of the list
 * @param int contents
 */
void InsertTail(int contents);

/**
 * removes the head node from the list,
 * or does nothing if the list is empty
 */
void RemoveHead();

/**
 * removes the tail node from the list,
 * or does nothing if the list is empty
 */
void RemoveTail();
};

#endif