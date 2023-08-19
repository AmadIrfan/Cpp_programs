#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void game_changer(int x);
int main()
{
    int x = 100;
    cout << "values of X before function is " << x << endl;
    game_changer(x);
    cout << "values of X after function is " << x << endl;
    return 0;
}
void game_changer(int x)
{
    cout << "values of X in function is " << x << endl;
    x = x + 100;
    cout << "values of X in function after changing  is " << x << endl;
}
