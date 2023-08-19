#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int tri(int num);
int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;
    cout << tri(num);
}
int tri(int num)
{
    int cross=1;
    for (int i = 1; i <= num; i++)
    {
        cross = cross + i;
    }
    return cross-1;
}