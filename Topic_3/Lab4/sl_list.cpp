/*
 * Name        : sl_list.cpp
 * Author      : Dustin Miner
 * Description :implementation File for topic 3 lab 3
 */
 #include "sl_list.h"



/**
 * Constructor
 * sets head_ to NULL
 * sets size_ to 0
 */
SLList::SLList()
{
    size_ = 0;
    head_ = NULL;
    tail_ = NULL;
}
  
/**
 * Destructor
 * calls Clear()
 */
SLList::~SLList()
{
    Clear();
}
  
/**
 * creates a new dynamic SLNode with the contents of 
 * the parameter and attaches as the new head of the list
 * @param int contents
 */
void SLList::InsertHead(int contents)
{
    SLNode* temp = new SLNode(contents);
    temp->set_next_node(head_);
    head_ = temp;
    size_ += 1;
    if (tail_ == NULL)
    tail_ = head_;
}

/**
 * creates a new dynamic SLNode with the contents of 
 * the parameter and attaches as the new tail of the list
 * @param int contents
 */
void SLList::InsertTail(int contents)
{
    if (head_ != NULL)
    {
        SLNode* temp, *newNode = new SLNode(contents);
        temp = head_;
        while (temp->next_node() != NULL)
        {
            temp = temp->next_node();
        }
        temp->set_next_node(newNode);
        tail_ = newNode;
        size_ += 1;
    } else 
    {
        InsertHead(contents);
    }
}

/**
 * removes the head node from the list,
 * or does nothing if the list is empty
 */
void SLList::RemoveHead()
{
    
    if (head_ != NULL)
    {
        if (head_ == tail_)
        {
            tail_ = NULL;
        }
        SLNode* temp = head_;
        head_ = head_->next_node();
        delete temp;
        size_ -= 1;
        temp = NULL;
        }
}

/**
 * removes the tail node from the list,
 * or does nothing if the list is empty
 */
void SLList::RemoveTail()
{
    if (head_ != NULL)
    {
         if (head_ == tail_)
         {
             RemoveHead();
         } else 
         {
             SLNode* temp = head_;
             while (temp->next_node() != tail_)
             temp = temp->next_node();
             temp->set_next_node(NULL);
             delete tail_;
             tail_ = temp;
             size_ -= 1;
         }
    }
}

/**
 * Returns the contents of the head node
 * if the list is empty returns 0
 */
int SLList::GetHead() const
{
    //checks for empty list
    if (size_ == 0)
    return 0;
    //if list isn't empty returns contents
    return head_->contents();
    
}

/**
 * Returns the contents of the tail node
 * if the list is empty returns 0
 */
int SLList::GetTail() const
{
    //checks for empty list
    if (size_ == 0)
    return 0;
    //if list isn't empty returns contents
    return tail_->contents();
    
}

/**
 *  clears the entire contents of the list,
 *  freeing all memory associated with all nodes
 */
void SLList::Clear()
{

    while (head_ != NULL)
    {
        RemoveHead();
    }
    delete head_;
    head_ = NULL;
    tail_ = NULL;
    
}

/**
 * accessor for size_
 */
unsigned int SLList::size() const
{
    return size_;
}

/**
 * returns a string representation of the contents
 * of all nodes in the list, in the format
 * NUM1, NUM2, ..., LASTNUM
 * returns the empty string on an empty list (i.e. returns "")
 */
string SLList::ToString() const
{
    if (head_ == NULL)
    return "";
    stringstream ss;
        SLNode* temp = head_;
        
            while (temp != NULL)
            {
                ss << temp->contents();
                if (temp->next_node() != NULL)
                ss << ", ";
                temp = temp->next_node();
            }
    
    
    return ss.str();
}