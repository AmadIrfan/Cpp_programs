#include <iostream>
using namespace std;
int main()
{
    int one, two, three;
    cout << " Enter 1st number: ";
    cin >> one;
    cout << " Enter 2nd number: ";
    cin >> two;
    cout << " Enter 3rd number: ";
    cin >> three;
    if (one > two)
    {
        if (one > three)
        {
            cout << "1st is greatest number";
        }
    }
    if (two > three)
    {
        if (two > one)
        {
            cout << "2nd is greatest number";
        }
    }
    if (three > one)
    {
        if (three > two)
        {
            cout << "3rd is greatest number";
        }
    }
}