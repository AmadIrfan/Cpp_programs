#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void num_checker(int limit);
int limit_array[200];
int main()
{
    int limit;
    cout << "enter limit of array ";
    cin >> limit;
    cout << "Enter number ";
    for (int i = 0; i < limit; i++)
    {
        cin >> limit_array[i];
    }
    num_checker(limit);
}
void num_checker(int limit)
{
    for (int i = 1; i < (limit - 1); i++)
    {
        cout << " peek values are : ";
        if (limit_array[i - 1] < limit_array[i] && limit_array[i] > limit_array[i + 1])
        {
            cout << limit_array[i] << " ";
        }
    }
}