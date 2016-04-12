/*
 * Name        : dl_node.cpp
 * Author      : Dustin Miner
 * Description :implementation File for assignment 4 dl_node.h
 */
 #include "dl_node.h"

/**
 * Default constructor
 * sets next_node_ to NULL
 * sets contents_ to 0
 */
DLNode::DLNode()
{
    previous_node_ = NULL;
    next_node_ = NULL;
    contents_ = "";
}

/**
 * Overloaded Constructor
 * @param int contents sets contents_ to value
 * sets next_node_ to NULL
 */
DLNode::DLNode(string contents)
{
    contents_ = contents;
    next_node_ = NULL;
    previous_node_ = NULL;
}

/**
 * destructor
 * does nothing
 */
DLNode::~DLNode()
{
    
}

/**
 * Mutator for contents_
 * @param int contents sets contents_ to value
 */
void DLNode::setContents(string contents)
{
    contents_ = contents;
}

/**
 * Accessor for contents_
 * @return contents_
 */
string DLNode::getContents() const
{
    return contents_;
}

/**
 * Mutator for next_node_
 * @param DLNode* sets next_node_
 */
void DLNode::setNext(DLNode* next_node)
{
    next_node_ = next_node;
}

/**
 * Mutator for previous_node_
 * @param DLNode* previous_node
 */
void DLNode::setPrevious(DLNode* previous_node)
{
    previous_node_ = previous_node;
}
 
/**
 * Accessor for next_node_
 * @return next_node_
 */
DLNode* DLNode::DLNode::getNext() const
{
    return next_node_;
}

/**
 * Accessor for previous_node_
 * @return previous_node_
 */
DLNode* DLNode::getPrevious() const
{
    return previous_node_;
}