/*
 * Name        : sl_node.cpp
 * Author      : Dustin Miner
 * Description :implementation File for topic 3 lab 2
 */
 #include "sl_node.h"

/**
 * Default constructor
 * sets next_node_ to NULL
 * sets contents_ to 0
 */
SLNode::SLNode()
{
    next_node_ = NULL;
    contents_ = 0;
}

/**
 * Overloaded Constructor
 * @param int contents sets contents_ to value
 * sets next_node_ to NULL
 */
SLNode::SLNode(int contents)
{
    contents_ = contents;
    next_node_ = NULL;
}

/**
 * destructor
 * does nothing
 */
SLNode::~SLNode()
{
    
}

/**
 * Mutator for contents_
 * @param int contents sets contents_ to value
 */
void SLNode::set_contents(int contents)
{
    contents_ = contents;
}

/**
 * Accessor for contents_
 * @return contents_
 */
int SLNode::contents()
{
    return contents_;
}

/**
 * Mutator for next_node_
 * @param SLNode* sets next_node_
 */
void SLNode::set_next_node(SLNode* next_node)
{
    next_node_ = next_node;
}
 
/**
 * Accessor for next_node_
 * @return next_node_
 */
SLNode* SLNode::next_node() const
{
    return next_node_;
}