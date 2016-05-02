/*
 * Name        : bst_node.cpp
 * Author      : Dustin Miner
 * Description : TREES!!!
 */
 
 #include "bst_node.h"
 
/**
 * Default Constructor
 * sets left_child_ to NULL
 * sets right_child_ to NULL
 * sets contents_ to 0
 */
 BSTNode::BSTNode()
 {
     set_left_child(NULL);
     set_right_child(NULL);
     set_contents(0);
 }
 
/**
 * Overloaded Constructor
 * has one int parameter for contents
 * sets left_child_ to NULL
 * sets right_child_ to NULL
 * sets contents_ to the value of the parameter
 */
 BSTNode::BSTNode(int contents)
  {
     set_left_child(NULL);
     set_right_child(NULL);
     set_contents(contents);
 }
  
/**
 * Destructor
 * sets left_child_ to NULL
 * sets right_child_ to NULL
 */
 BSTNode::~BSTNode()
  {
     set_left_child(NULL);
     set_right_child(NULL);
 }
  
/**
 * Mutator for contents
 */
 void BSTNode::set_contents(int contents)
 {
     contents_ = contents;
 }
 
/**
 * Accessor for contents
 */
  int BSTNode::contents() const
  {
    return contents_;  
  }
  
/**
 * Accessor for contents
 */
  int& BSTNode::contents()
  {
      return contents_;
  }
  
/**
 * Mutator fot left_child_
 */
  void BSTNode::set_left_child(BSTNode* left)
  {
      left_child_ = left;
  }
  
/**
 * Mutator for right_child_
 */
  void BSTNode::set_right_child(BSTNode* right)
  {
      right_child_ = right;
  }
  
/**
 * Accessor for left_child_
 */
 BSTNode* BSTNode::left_child() const
 {
     return left_child_;
 }
 
/**
 * Accessor for left_child_
 */
  BSTNode*& BSTNode::left_child()
  {
      return left_child_;
  }
  
/**
 * Accessor for right_child_
 */
  BSTNode* BSTNode::right_child() const
  {
      return right_child_;
  }
  
/**
 * Accessor for right_child_
 */
  BSTNode*& BSTNode::right_child()
  {
      return right_child_;
  }