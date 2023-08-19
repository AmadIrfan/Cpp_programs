#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int numbers[1000];
int main()
{
    int size, count = 0;
    cout << "Enter array size: ";
    cin >> size;
    cout << "Enter numbers : ";
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    for (int j = 0; j < size; j++)
    {
        for (int k = 0; k < size; k++)
        {
            if (numbers[j] == numbers[k])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << j;
        }
    }

    return 0;
}