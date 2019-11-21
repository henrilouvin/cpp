#include <iostream>
#include "figure.hh"

using namespace std;

int main()
{
    Figure A(5);
    Figure B;

    cout<<"A: "<<A.description<<endl;
    cout<<"B: "<<B.description<<endl;

    return 0;
}
