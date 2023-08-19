#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    int *pc, c;
    c = 5;
    pc = &c;
    c = 1;
    cout << "value of num " << c << endl;
    cout << "Pc = " << *pc << endl;
    return 0;
}