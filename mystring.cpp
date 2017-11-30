/*
 * mystring.cpp
 */

#include <cstdio>
#include <cstring>
#include "mystring.h"

// default constructor

MyString::MyString()
{
  data = new char[1];
  data[0] = "\0";

  len = 0;
}


// constructor

MyString::MyString(const char* p)
{
  if (p) {
    len = strlen(p);
    data = new char[len+1];
    strcpy(data, p);
  } else {
    data = new char[1];
    data[0] = "\0";
    len = 0;
  }
}

// destructor

MyString::~MyString()
{
  delete[] data;
}

//copy constructor

MyString::Mystring(const Mystring& s)
{
  len = s.len;

  data = new char[len+1];
  strcpy(data, s.data);
}


// copy assignment

MyString& MyString::operator=(const MyString& rhs)
{
  if(this == &rhs) {
    return *this;
  }

  // deallocate the memory that "this" used to hold

  delete[] data;

  // now copy from rhs

  len = rhs.len;

  data = new char[len+1];
  strcpy(data, rhs.data);

  return *this;

}

//operator +

MyString operator+(const MyString& s1, const Mystring& s2)
{
  MyString tmp;

  delete[] tmp.data;

  tmp.len = s1.len + s2.len;
  tmp.data = new char[tmp + 1];
  strcpy(tmp.data, s1.data);
  strcat(tmp.data, s2.data);

  return tmp;

}

















