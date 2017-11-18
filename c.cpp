#include <cstdio>
#include <iostream>
using namespace std;

class Pt {
public:
  double x;
  double y;

  Pt(double a = 10.0) {
    x = y = a;
    cout << "hi" << endl;
  }

  // Copy constructor; was called three times
  Pt(const Pt& p) {
    x = p.x;
    y = p.y;
    count << "copy" << endl;
  }

  // operator overload
  Pt& operator=(const Pt& rhs) {
    x = rhs.x;
    y = rhs.y;
    cout << "op=" << endl;
    return *this;
  }


  // deconstructor
  ~Pt() {
    cout << "bye" << endl;
  }

  void print print() {
    cout << "(" << x << "," << this->y << ")" << endl;
  };


// void transpose(Pt& p) // passing by 








