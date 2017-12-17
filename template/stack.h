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
