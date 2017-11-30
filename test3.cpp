/*
 * test3.cpp
 */

#include "mystring.h"

int main() {

  cout << "Enter a string: ";

  MyString s;

  cin >> s;

  for (int i = 0; i < s.length(); ++i) 
  {
    if ('a' <= s[i] && s[i] <= 'z') 
    {
      s[i] = s[i] - ('a' - 'A'); // ASCII Code
    }
  }

  cout << "Here is how to say it louder (All_Capilizaed): " << s << endl;

  return 0;
}