/* 
 * mystring.h
 */

#ifndef __MYSTRING_H__
#define __MYSTRING_H__

#include <iostream>

using namespace std;

class MyString {
public:
  // default constructor
  MyString();

  // constructor
  MyString(const char* p);

  // destructor
  ~MyString();

  // copy constuctor
  MyString(const MyString& s);

  // copy assignment
  MyString& operator=(const MyString& s);
}