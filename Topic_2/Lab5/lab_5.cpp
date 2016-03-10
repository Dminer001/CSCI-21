/*
 * Name        : lab_5.cpp
 * Author      : Dustin Miner
 * Description : Implementation file for lab_5
 */

#include "lab_5.h"
    
      /*
   * Constructors
   * @param T contents - An initial value to give. Defaults to "zero"
   */
  template<class T>
  Box<T>::Box(T newContents)
  {
      contents_ = newContents;
  }
  template void Box<int>();
  
  /*
   * Accessor
   * @return T - The value of contents_
   */
  template<class T>
  T Box<T>::getContents()
  {
      return contents_;
  }
  template void getContents<int>();
  /*
   * Mutator
   * @param T contents - A value to set contents_ to
   */
  template<class T> 
  void Box<T>::setContents(T contents)
  {
      contents_ = contents;
  }
  template void setContents<int>();
  
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