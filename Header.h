//
//  Header.h
//  Stack
//
//  Created by Барабаш Мирослава on 02.11.17.
//  Copyright © 2017 Барабаш Мирослава. All rights reserved.
//

#ifndef Header_h
#define Header_h
template <typename T>
class Stack
{
private:
    T *stackPtr;
    const int size;
    int top;
public:
    Stack(int = 10);
    Stack(const Stack<T> &);
    
    inline void push(const T & );
    inline T pop();
    inline void printStack();
    inline int getStackSize() const;
    inline T *getPtr() const;
    inline int getTop() const;
};


template <typename T>
Stack<T>::Stack(int maxSize) :
size(maxSize)
{
    stackPtr = new T[size];
    top = 0;
}


template <typename T>
Stack<T>::Stack(const Stack<T> & otherStack) :
size(otherStack.getStackSize())
{
    stackPtr = new T[size];
    top = otherStack.getTop();
    
    for(int ix = 0; ix < top; ix++)
        stackPtr[ix] = otherStack.getPtr()[ix];
}


template <typename T>
Stack<T>::~Stack()
{
    delete [] stackPtr;
}


template <typename T>
inline void Stack<T>::push(const T &value)
{
    
    assert(top < size);
    
    stackPtr[top++] = value;
}


template <typename T>
inline T Stack<T>::pop()
{
    
    assert(top > 0);
    
    stackPtr[--top];
}


template <class T>
inline const T &Stack<T>::Peek(int nom) const
{
    
    assert(nom <= top);
    
    return stackPtr[top - nom];
}


template <typename T>
inline void Stack<T>::printStack()
{
    for (int ix = top - 1; ix >= 0; ix--)
        cout << "|" << setw(4) << stackPtr[ix] << endl;
}


template <typename T>
inline int Stack<T>::getStackSize() const
{
    return size;
}


template <typename T>
inline T *Stack<T>::getPtr() const
{
    return stackPtr;
}

template <typename T>
inline int Stack<T>::getTop() const
{
    return top;
}

#endif /* Header_h */
