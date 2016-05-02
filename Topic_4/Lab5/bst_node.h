/*
 * Name        : bst_node.h
 * Author      : Dustin Miner
 * Description : TREES!!!
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

class BSTNode
{

private:
/**
 * Points to a left child
 */
  BSTNode* left_child_;
/**
 * points to a right child
 */
  BSTNode* right_child_;
/**
 * holds data for the node
 */
  int contents_;

public:

/**
 * Default Constructor
 * sets left_child_ to NULL
 * sets right_child_ to NULL
 * sets contents_ to 0
 */
 BSTNode();
 
/**
 * Overloaded Constructor
 * has one int parameter for contents
 * sets left_child_ to NULL
 * sets right_child_ to NULL
 * sets contents_ to the value of the parameter
 */
 BSTNode(int contents);
  
/**
 * Destructor
 * sets left_child_ to NULL
 * sets right_child_ to NULL
 */
 ~BSTNode();
  
/**
 * Mutator for contents
 */
 void set_contents(int contents);
 
/**
 * Accessor for contents
 */
  int contents() const;

/**
 * Accessor for contents
 */
  int& contents();

/**
 * Mutator fot left_child_
 */
  void set_left_child(BSTNode* left);
  
/**
 * Mutator for right_child_
 */
  void set_right_child(BSTNode* right);

  
/**
 * Accessor for left_child_
 */
 BSTNode* left_child() const;
 
/**
 * Accessor for left_child_
 */
  BSTNode*& left_child();
  
/**
 * Accessor for right_child_
 */
  BSTNode* right_child() const;
  
/**
 * Accessor for right_child_
 */
  BSTNode*& right_child();
};

#endif