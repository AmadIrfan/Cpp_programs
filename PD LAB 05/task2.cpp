/*Write a program that asks the user which country he/she lives in. If the country is not “Germany” or
“Australia”, the program should print out “You should come to visit these sometime!”.*/

//header files
#include <iostream>
using namespace std;
int main()
{
    //variable declared
    string country;

    cout << " Your country is ";
    cin >> country;
    if (country != "germany" && country != "austraila")
    {
        cout << "you should come to visit these Germany and Austraila";
    }
}