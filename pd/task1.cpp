#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
char seats[13][5] =
    {
        {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}, {'*', '*', '*', '*', '*', '*'}};
void head();
int main()
{
    head();
}
void head()
{
    cout << "       ******************************************* " << endl;
    cout << "                  flight seat management           " << endl;
    cout << "       ******************************************* " << endl;
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}