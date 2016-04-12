/*
 * Name        : dl_node.h
 * Author      : Dustin Miner
 * Description : Header File assignment 4 dl_node
 */

#ifndef LAB_H
#define LAB_H

#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

class DLNode
{

public:

/**
 * Default constructor
 * sets next_node_ to NULL
 * sets previous_node_ to NULL
 * sets contents_ to 0
 */
DLNode();

/**
 * Overloaded Constructor
 * @param int contents sets contents_ to value
 * sets next_node_ to NULL
 * sets previous_node_ to NULL
 */
DLNode(string contents);

/**
 * destructor
 * does nothing
 */
virtual ~DLNode();

/**
 * Mutator for contents_
 * @param int contents sets contents_ to value
 */
void setContents(string contents);

/**
 * Accessor for contents_
 * @return contents_
 */
string getContents() const;

/**
 * Mutator for next_node_
 * @param DLNode* sets next_node_
 */
void setNext(DLNode* next_node);

/**
 * Mutator for previous_node_
 * @param DLNode* previous_node
 */
void setPrevious(DLNode* previous_node);
 
 
/**
 * Accessor for next_node_
 * @return next_node_
 */
DLNode* getNext() const;

/**
 * Accessor for previous_node_
 * @return previous_node_
 */
DLNode* getPrevious() const;

private:
/**
 * points to the next node in a list
 * tail points to head
 */
DLNode* next_node_;

/**
 * points to the previous node in the list
 * head points to tail
 */
DLNode* previous_node_;

/**
 * stores the data contents of a DLNode
 */
 string contents_;
};
#endif