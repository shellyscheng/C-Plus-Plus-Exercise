#include <cstdio> // C++ way to include stdio.h
#include <iostream>
using namespace std;

class Pt {
public:
    double x;
    double y;

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
    Pt p1 = { 1.0, 2.0 };

    transpose(p1);

    p1.print(); // C++-to-C translator might change it to Pt_print(&p1);
}
