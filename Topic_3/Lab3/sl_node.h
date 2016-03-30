/*
 * Name        : sl_node.h
 * Author      : Dustin Miner
 * Description : Header File for topic 3 lab 2
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

class SLNode
{

public:

/**
 * Default constructor
 * sets next_node_ to NULL
 * sets contents_ to 0
 */
SLNode();

/**
 * Overloaded Constructor
 * @param int contents sets contents_ to value
 * sets next_node_ to NULL
 */
SLNode(int contents);

/**
 * destructor
 * does nothing
 */
~SLNode();

/**
 * Mutator for contents_
 * @param int contents sets contents_ to value
 */
void set_contents(int contents);

/**
 * Accessor for contents_
 * @return contents_
 */
int contents();

/**
 * Mutator for next_node_
 * @param SLNode* sets next_node_
 */
void set_next_node(SLNode* next_node);
 
/**
 * Accessor for next_node_
 * @return next_node_
 */
SLNode* next_node() const;

private:
/**
 * points to the next node in a list
 */
SLNode* next_node_;

/**
 * stores the data contents of a SLNode
 */
 int contents_;
};
#endif