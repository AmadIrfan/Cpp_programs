#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    int *pc, d, c;
    c = 5;
    d = -6;
    pc = &c;
    cout << "value of c is " << *pc << endl;
    pc = &d;
    cout << "value of d is " << *pc << endl;
    return 0;
}