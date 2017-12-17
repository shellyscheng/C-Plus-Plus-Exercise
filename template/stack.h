/*
 * stack.h
 */

#ifdef _STACK_H_
#define _STACK_H_

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
  deque<T> q;
}
