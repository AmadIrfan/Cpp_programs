#include <iostream>
#include <cmath>
using namespace std;
main()
{
    string alpha[];
    cout << "Enter a name ";
    cin >> alpha;
    for (int i = 0; alpha[i] != '\0'; i++)
    {
        cout << alpha[i];
    }
    return 0;
}