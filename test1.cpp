/*
 * test1.cpp: test for MyString Class
 */

#include "mystring.h"

int main() {
  
  MyString s1;

  MyString s2("hello");

  MyString s3(s2);

  s1 = s2;

  cout << s1 << "," << s2 << "," << s3 << endl;

  return 0;
}