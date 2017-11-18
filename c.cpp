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
    cout << "copy" << endl;
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

  void print() {
    cout << "(" << x << "," << this->y << ")" << endl;
  }
};


  // void transpose(Pt& p) // passing by reference
Pt extend(Pt p6) { // Case 2: copy consturction when passing by value
  p6.x *= 2;
  p6.y *= 2;
  return p6; // Case 3: copy construction when returning. 
}


int main() {
  {
    // p1, p2, p3 will come and go in this local scope
    Pt p1;
    Pt p2;
    Pt p3;
  }

  Pt p4(5);
  Pt p5(p4); // Case 1: direct copy construction
  p4 = extend(p5);
  p4.print();

  // p1.print(); //C++to-C translator might change it to Pt_print(&pt)
}













