/*
 * mystring.cpp
 *
 * operator overload
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
    data[0] = '\0';
    len = 0;
  }
}

// destructor

MyString::~MyString()
{
  delete[] data;
}

//copy constructor

MyString::MyString(const MyString& s)
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

MyString operator+(const MyString& s1, const MyString& s2)
{
  MyString tmp;

  delete[] tmp.data;

  tmp.len = s1.len + s2.len;
  tmp.data = new char[tmp + 1];
  strcpy(tmp.data, s1.data);
  strcat(tmp.data, s2.data);

  return tmp;

}

// put-to operator

ostream& operator<<(ostream& os, const MyString& s)
{
  os << s.data;
  return os;
}

// get-from operator

istream& operator>>(istream& is, const MyString& s)
{
  // a cheating way. Use C++'s string class

  string tmp;

  is >> tmp;

  delete[] s.data;

  s.len = strlen(tmp.c_str());
  s.data = new char[s.len + 1];
  strcpy(s.data, tmp.c_str());

  return is;

}


// operator[] - noramlly, this function should be decleared inline

char& MyString::operator[](int i)
{
  return data[i];
}


// operator[] const - this function should also be decleared inline

const char& MyString::operator[](int i) const
{
  // casting using the above function
  return ((MyString&)*this)[i];
}















