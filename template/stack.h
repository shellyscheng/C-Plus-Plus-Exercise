/*
 * stack.h
 */

#ifndef __STACK_H__
#define __STACK_H__

#include <deque>
#include <algorithm>
#include <iostream>

using namespace std;

template <typename T>
class Stack;
template <typename T>
ostream& operator<<(ostream& os, const Stack<T>& rhs);


template <typename T>
class Stack
{
public:

  bool empty() const { return q.empty(); }

  void push (const T& t) { q.push_back(t); }

  T pop();

  void reverse();

  friend ostream& operator<< <T>(ostream& os, const Stack<T>& rhs);

private:
  deque<T> q; // double-ended queue
};


template <typename T>
T Stack<T>::pop()
{
  T t = q.back(); // Access last element
  q.pop_back(); // Delete last element
  return t;
};

template <typename T>
void Stack<T>::reverse()
{
  ::reverse(q.begin(), q.end()); // calling std::reverse
};

template <typename T>
ostream& operator<<(ostream& os, const Stack<T>& rhs)
{
  os << "[";

  // i is iterator
  // "auto" mgiht need "-std=c++11" or "-std=c++0x" flags to complie
  for (auto i = rhs.q.begin(); i != rhs.q.end(); ++i)
  {
    os << *i << " ";
  }

  os << "<";
  return os;
};

#endif
