#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int checker();
char alpha[100];
int main()
{
    int source = checker();
    cout << "chercter shows " << source << " times";
}
int checker()
{
    char chr;
    int num, c = 0;
    cout << "Enter limit ";
    cin >> num;
    cout << "Enter characters ";
    for (int i = 0; i < num; i++)
    {
        cin >> alpha[i];
    }
    cout << "Enter characters you check ";
    cin >> chr;
    for (int i = 0; i < num; i++)
    {
        if (alpha[i] == chr)
        {
            c++;
        }
    }
    return c;
}