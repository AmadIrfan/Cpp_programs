#include <iostream>
using namespace std;
int main()
{
    int internal_input,input;
    system("CLS");
    cout << "           ******************************************************************************    " << endl;
    cout << "           * * * * *                                                            * * * * *    " << endl;
    cout << "           ******************************* Car Rantel System ****************************    " << endl;
    cout << "           * * * * *                                                            * * * * *    " << endl;
    cout << "           ******************************************************************************    " << endl;

    cout << endl
         << endl
         << endl;
    cout << "Main Manu > User" << endl;
    cout << "--------------------------------------------------";
    cout << endl
         << endl;
    cout << "(1) : Existing" << endl;
    cout << "(3) : Create New Account" << endl;
    cout << "(4) : Main Manu" << endl;
    cout << endl
         << endl;
    cout << "INPUT : ";
    // change occure 
    cin >> input;
    cout << endl
         << endl;
    if (input == 1)
    {
        system("CLS");
        cout << "           ******************************************************************************    " << endl;
        cout << "           * * * * *                                                            * * * * *    " << endl;
        cout << "           ******************************* Car Rantel System ****************************    " << endl;
        cout << "           * * * * *                                                            * * * * *    " << endl;
        cout << "           ******************************************************************************    " << endl;
        cout << endl
             << endl
             << endl;
        cout << "Main Manu > User " << endl;
        cout << "--------------------------------------------------";
        cout << endl
             << endl;
        cout << "(1) : Dashboard" << endl;
        cout << "(2) : Book Car" << endl;
        cout << "(3) : Cancal Book" << endl;
        cout << "(4) : Add New Location" << endl;
        cout << "(5) : Log Off" << endl;
        cout << endl
             << endl;
        cout << "INPUT : ";
        cin >> internal_input;
        cout << endl
             << endl;
    }
}