/*
 * Name        : bs_tree.h
 * Author      : Dustin Miner
 * Description : TREES!!!
 */
 #include "bs_tree.h"




/**
 * creates a new BSTNode, Inserts it into the tree, and returns true
 * if the integer is already in the tree, does not Insert, and returns false
 */
bool BSTree::Insert(int contents, BSTNode*& root)
{
    BSTNode* newNode = new BSTNode(contents);
    if (root == NULL)
    {
        root = newNode;
        size_ += 1;
        return true;
    } 
    else if (newNode->contents() < root->contents())
    {
        // if (root->left_child() == NULL)
        // {
        // root->set_left_child(newNode);
        // size_ += 1;
        // }
        // else
        Insert(contents, root->left_child());
    }
    else if (newNode->contents() > root->contents())
    {
        Insert(contents, root->right_child());
        
    }else
    return false;
}

/**
 * clears the entire contents of the tree,
 * freeing all memory associated with all nodes
 */
void BSTree::Clear(BSTNode*& root)
{
    if (root != NULL)
    {
        if (root->left_child() == NULL && root->right_child() == NULL)
        {
            delete root;
            root = NULL;
        } else
        {
            if (root->left_child())
            {
            Clear(root->left_child());
            }
            if (root->right_child())
            {
                Clear(root->right_child());
            }
        }
    size_ -= 1;
    root = NULL;
    }
}

/**
 * creates a string of the data in all nodes in the tree, in ascending order
 * separate by spaces (there should be a space after the last output value)
 */
string BSTree::InOrder(BSTNode* root)
{
    stringstream ordered;
    if (root == NULL)
    {
        ordered << "";
    }
    else 
    {
        ordered<<InOrder(root->left_child());
        ordered << root->contents() << " ";
        ordered<<InOrder(root->right_child());
    }
    return ordered.str();
}




/**
 * Default constructor
 * sets root_ to NULL
 * sets size_ to 0
 */
BSTree::BSTree()
{
    root_ = NULL;
    size_ = 0;
}

/**
 * destructor
 * calls Clear()
 */
BSTree::~BSTree()
{
    Clear();
}

/**
 * calls private function Insert(int, root)
 */
bool BSTree::Insert(int contents)
{
    return Insert(contents, root_);
}

/**
 * calls private function Clear(root)
 */
void BSTree::Clear()
{
    Clear(root_);
}

/**
 * Accessor for size_
 */ 
unsigned int BSTree::size() const
{
    return size_;
}

/**
 * calls private function InOrder(root)
 */
string BSTree::InOrder()
{
    return InOrder(root_);
}