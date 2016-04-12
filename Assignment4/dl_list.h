/*
 * Name        : dl_list.h
 * Author      : Dustin Miner
 * Description : Header File for assignment 4 dl_list
 */

#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>
#include <sstream>
#include "dl_node.h"
using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::stringstream;

class DLList 
{

public:
/**
 * Constructor
 * sets head_ to NULL
 * sets tail_ to NULL
 * sets size_ to 0
 */
DLList();
  
/**
 * Destructor
 * calls Clear()
 */
~DLList();

/**
 * accessor for size_
 */
unsigned int getSize() const;
  
/**
 * creates a new dynamic DLNode with the contents of 
 * the parameter and attaches as the new head of the list
 * @param int head
 */
void pushFront(string contents);

/**
 * returns the pointer to the head of the list
 * @return head_
 */
DLNode* getHead();

/**
 * creates a new dynamic DLNode with the contents of 
 * the parameter and attaches as the new tail of the list
 * @param int contents
 */
void pushBack(string contents);

/**
 * Insert function that creates a new node and
 * inserts it in an appropriate location in the list.
 *@param int contents the contents of the new node.
 */
 
void insert(string contents);

/**
 * Returns the contents of the head node
 * if the list is empty throw "LIST EMPTY"
 */
string getFront() const;

/**
 * Returns the contents of the tail node
 * if the list is empty throw "LIST EMPTY"
 */
string getBack() const;

/**
 * returns true if parameter is in the list
 * else returns false
 */
 bool get(string contents);

/**
 * removes the head node from the list,
 * or does nothing if the list is empty
 */
void popFront();

/**
 * removes the tail node from the list,
 * or does nothing if the list is empty
 */
void popBack();

/**
 * Removes first occurence of the supplied data
 * @param int contents data to compare
 * traverses the list comparing contents
 * @return true if complete
 * @return false if empty or data does not exist
 */
 
 bool removeFirst(string contents);
 
 /**
  * Removes all occurences of the parameter
  * does nothing if not in list
  */
  bool removeAll(string contents);

/**
 * clears the entire contents of the list,
 * resets members to defaults
 * freeing all memory associated with all nodes
 */
void Clear();

/**
 * returns a string representation of the contents
 * of all nodes in the list, in the format
 * NUM1,NUM2,...,LASTNUM
 * returns the empty string on an empty list (i.e. returns "")
 */
//friend ostream& operator <<(ostream &out, const DLList &contents);
string ToString() const; 
 
/**
 *  points to the first node in a singly-linked list
 */
DLNode* head_;

/**
 * points to the last node in the list
 */
DLNode* tail_;
  
  
/**
 * stores the count of the number of nodes in the list
 */
unsigned int size_;
};

#endif