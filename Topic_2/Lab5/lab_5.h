/*
 * Name        : lab_5.h
 * Author      : Dustin Miner
 * Description : Header File for Topic 2 lab_5.cpp
 */
#ifndef LAB_H
#define LAB_H

#include <iostream>
#include <string>
using namespace std;




// This class is a wrapper around a single data member. Since it is templated
// that data member can be of any type
template<class T>
class Box {
 public:
  /*
   * Constructors
   * @param T value - An initial value to give. Defaults to "zero"
   */
  Box();
   
  Box(T newContents = T());
  /*
   * Accessor
   * @return T - The value of value_
   */
  T getContents();
  /*
   * Mutator
   * @param T value - A value to set value_ to
   */
  void setContents(T contents);
  
  friend ostream& operator <<(ostream &out,  const Box<T> &contents)
    {
      out << contents.contents_;
      return out;
  }
 private:
  T contents_;
};

template <typename Type>
Type Sum(Type values[], unsigned int size);
    
  
  /*
   * Constructors
   * @param T contents - An initial value to give. Defaults to "zero"
   */
  template<class T>
  Box<T>::Box(T newContents)
  {
      contents_ = newContents;
  }
  
  
  /*
   * Accessor
   * @return T - The value of contents_
   */
  template<class T>
  T Box<T>::getContents()
  {
      return contents_;
  }
  /*
   * Mutator
   * @param T contents - A value to set contents_ to
   */
  template<class T> 
  void Box<T>::setContents(T contents)
  {
      contents_ = contents;
  }
  
 /* Box<Type>::ostream& operator <<(ostream &out, Box<T> &contents)
  {
      out << contents.contents_;
      return out;
  }
*/
    template <typename Type>
    Type Sum(Type values[], unsigned int size)
    {
        
        Type sum = Type();
        for (int i = 0; i < size; i++)
        {
            sum += values[i];
        }
        return sum;
    }



#endif