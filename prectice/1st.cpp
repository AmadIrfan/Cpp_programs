#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void pass(int number[6]);
int main()
{
    int number[6] = {12, 56, 24, 34, 14, 54};
    pass(number);
    return 0;
}
void pass(int number[6])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (number[j] < number[i])
            {
                int temp;
                temp = number[j];
                number[j] = number[i];
                number[i] = temp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << number[i] << endl;
    }
    for (int  i = 0; i < "\0"; i++)
    {
        char a  =
    }
    
} 
