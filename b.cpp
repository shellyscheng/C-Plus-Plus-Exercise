#include <cstdio> // C++ way to include stdio.h
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

    Pt(const Pt& p) {
        // TODO: initialize
        cout << "copy" << endl;
    }

    ~Pt() {
        cout << "bye" << endl;
    }

    void print() { 
        cout << "(" << x << "," << this->y << ")" << endl;
    }
};

// void transpose(Pt& p) // passing by reference 
void transpose(Pt p) // passing by value
{
    double t = p.x;
    p.x = p.y;
    p.y = t;
}

int main()
{
    Pt p1;

    transpose(p1);

    p1.print(); // C++-to-C translator might change it to Pt_print(&p1);
}
