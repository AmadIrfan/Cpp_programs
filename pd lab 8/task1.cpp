#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
void amplify(int numstask);
int main()
{
    int num;
    cout << " Enter a number ";
    cin >> num;
    amplify(num);
}

void amplify(int num)
{
    int i;

    for (i = 1; i <= num; i++)
    {
        int a = i;
        if (i % 4 == 0)
        {
            a = i * 10;
        }
        cout << a << " ";
    }
}