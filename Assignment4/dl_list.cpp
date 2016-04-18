/*
 * Name        : dl_list.cpp
 * Author      : Dustin Miner
 * Description :implementation File for assignment 4 dl_list.h
 */
 #include "dl_list.h"



/**
 * Constructor
 * sets head_ to NULL
 * sets size_ to 0
 */
DLList::DLList()
{
    size_ = 0;
    head_ = NULL;
    tail_ = NULL;
}
  
/**
 * Destructor
 * calls Clear()
 */
DLList::~DLList()
{
    Clear();
}

/**
 * accessor for size_
 */
unsigned int DLList::getSize() const
{
    return size_;
}
  
/**
 * creates a new dynamic DLNode with the contents of 
 * the parameter and attaches as the new head of the list
 * @param string contents
 */
void DLList::pushFront(string contents)
{
    DLNode* temp = new DLNode(contents);
    temp->setNext(head_);
    temp->setPrevious(tail_);
    head_ = temp;
    size_ += 1;
    if (tail_ == NULL)
    tail_ = head_;
}

/**
 * creates a new dynamic DLNode with the contents of 
 * the parameter and attaches as the new tail of the list
 * @param string contents
 */
void DLList::pushBack(string contents)
{
    if (head_ != NULL)
    {
        DLNode* temp, *newNode = new DLNode(contents);
        temp = head_;
        while (temp->getNext() != NULL)
        {
            temp = temp->getNext();
        }
        temp->setNext(newNode);
        newNode->setNext(head_);
        tail_ = newNode;
        size_ += 1;
    } else 
    {
        pushFront(contents);
    }
}

/**
 * Insert function that creates a new node and
 * inserts it in an appropriate location in the list.
 *@param string contents the contents of the new node.
 */
void DLList::insert(string contents)
{
    //Checks if head is null or contents is < head_->getContents();
    if (head_ == NULL)
    {
        pushFront(contents);
    } else if ( tail_->getContents() < contents)
    {
      //  cout << " got it: " << contents << endl;
     //   cout << ToString();
        pushBack(contents);
    } else 
    {
        //creates iterator and newnode
        DLNode* iterator;
        iterator = head_;
        while (iterator->getNext() != tail_ && contents > iterator->getNext()->getContents())
        {
        iterator = iterator->getNext();
        }
        if (iterator != tail_)
        {
            DLNode *newNode = new DLNode(contents);
            newNode->setNext(iterator->getNext());
            iterator->setNext(newNode);
            size_ +=1;
        } else
        {
            pushBack(contents);
        }
    }
}

/**
 * Returns the contents of the head node
 * if the list is empty returns 0
 */
string DLList::getFront() const
{
    //checks for empty list
    if (size_ == 0)
    throw "LIST EMPTY";
    else
    //if list isn't empty returns contents
    return head_->getContents();
    
}

/**
 * returns the pointer to the head of the list
 * @return head_
 */
DLNode* DLList::getHead() {
    while (head_ != NULL)
    return head_;
}

/**
 * Returns the contents of the tail node
 * if the list is empty returns 0
 */
string DLList::getBack() const
{
    //checks for empty list
    if (size_ == 0)
    throw "LIST EMPTY";
    else
    //if list isn't empty returns contents
    return tail_->getContents();
    
}

/**
 * returns true if parameter is in the list
 * else returns false
 */
 bool DLList::get(string contents)
 {
     DLNode* temp = head_;
     while (temp != tail_)
     {
         if (temp->getContents() == contents)
         return true;
         if (temp->getContents() != contents)
         {
             temp = temp->getNext();
         }
     }
     return false;
 }

/**
 * removes the head node from the list,
 * or does nothing if the list is empty
 */
void DLList::popFront()
{
    
    if (head_ != NULL)
    {
        if (head_ == tail_)
        {
            tail_ = NULL;
        }
        DLNode* temp = head_;
        head_ = head_->getNext();
        head_->setPrevious(tail_);
        delete temp;
        size_ -= 1;
        temp = NULL;
        }
}

/**
 * removes the tail node from the list,
 * or does nothing if the list is empty
 */
void DLList::popBack()
{
    if (head_ != NULL)
    {
         if (head_ == tail_)
         {
             popFront();
         } else 
         {
             DLNode* temp = head_;
             while (temp->getNext() != tail_)
             temp = temp->getNext();
             temp->setNext(NULL);
             delete tail_;
             tail_ = temp;
             size_ -= 1;
         }
    }
}

/**
 * Removes first occurence of the supplied data
 * @param string contents data to compare
 * traverses the list comparing contents
 * @return true if complete
 * @return false if empty or data does not exist
 */
 
 bool DLList::removeFirst(string contents)
 {
     //returns false for empty list
     if (head_ == NULL)
     {
         return false;
         // uses popBack() if tail == contents
     } else if (tail_->getContents() == contents)
     {
         popBack();
         return true;
     } else 
     {
         //creating pointers
         DLNode* iterator = head_, *temp = head_->getNext();
         //traverses to find match for contents
         while (contents != temp->getContents() && temp->getNext() != NULL)
         {
             temp = temp->getNext();
             iterator = iterator->getNext();
         }
     //returns false if contents are not in list
     if (temp == tail_ && temp->getContents() != contents)
     {
         return false;
     
     } else
     //checks if temp is the node to delete then executes
         if(temp->getContents() == contents)
         {
             iterator->setNext(temp->getNext());
             delete temp;
             size_ = size_ - 1;
             temp = NULL;
             
         } 
     } 
             return true;
 }

/**
  * Removes all occurences of the parameter
  * does nothing if not in list
  */
  bool DLList::removeAll(string contents)
  {
       //returns false for empty list
     if (head_ == NULL)
     {
         return false;
       // uses popBack() if tail == contents
     } else if (tail_->getContents() == contents)
     {
         popBack();
         return true;
     } else 
     {
         //creating pointers
         DLNode* iterator = head_, *temp = head_->getNext();
         //traverses to find match for contents
         while (contents != temp->getContents() && temp->getNext() != NULL)
         {
             temp = temp->getNext();
             iterator = iterator->getNext();
         }
     //returns false if contents are not in list
     if (temp == tail_ && temp->getContents() != contents)
     {
         return false;
     
     } else
     //checks if temp is the node to delete then executes
     while (temp != NULL)
     {
         if(temp->getContents() == contents)
         {
             iterator->setNext(temp->getNext());
             delete temp;
             size_ = size_ - 1;
             temp = NULL;
             
         }
     }
         
     } 
     return true;
  }




/**
 *  clears the entire contents of the list,
 *  freeing all memory associated with all nodes
 */
void DLList::Clear()
{

    while (head_ != NULL)
    {
        popFront();
    }
    head_ = NULL;
    tail_ = NULL;
    
}



/**
 * returns a string representation of the contents
 * of all nodes in the list, in the format
 * NUM1, NUM2, ..., LASTNUM
 * returns the empty string on an empty list (i.e. returns "")
 */
/*ostream& operator <<(ostream &out, const DLList &list) 
{
    DLNode* temp = list.head_;
    if (temp == NULL)
    out << "";
    else
    {
        while (temp != NULL)
        {
            out << temp->getContents();
            if (temp->getNext() != NULL)
            out << ", ";
            temp = temp->getNext();
        }
   }
   /* DLNode* temp = contents.getFront();
    while (temp != NULL)
    {
        out << temp->getContents();
        temp = temp->getNext();
    }*/
    string DLList::ToString() const
{
    if (head_ == NULL)
    return "";
    stringstream ss;
        DLNode* temp = head_;
        
            while (temp != NULL)
            {
                ss << temp->getContents();
                if (temp->getNext() != NULL)
                ss << ", ";
                temp = temp->getNext();
            }
    
    
    return ss.str();
}
    
    
    