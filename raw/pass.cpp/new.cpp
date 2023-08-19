#include <iostream>
using namespace std;

main()
{
    int money = 0;
    string meal = "fruit";

    if (meal == "fruit" || meal == "sandwich" && money >= 2)
    {
        cout << "Lunch being delivered" << endl;
    }
    else
    {
        cout << "Cannot deliver Lunch" << endl;
    }
}