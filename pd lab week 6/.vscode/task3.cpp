/*A leap year has one day added to February for being synchronized with the seasonal year. A leap year
appears with a regular frequency, and You can check whether a year is leap or not by using this
mathematical logic:
Leap Year:
● If a year is divisible by 4, 100 and 400 then it is a leap year.
● If a year is divisible by 4 but not divisible by 100 then it is a leap year
Not a Leap Year:
● If a year is not divisible by 4 then it is not a leap year
● If a year is divisible by 4 and 100 but not divisible by 400 then it is not a leap year
Given a year you must implement a function that returns true if it's a leap year, or false if it's not.*/

#include <iostream>
using namespace std;
string leap(int num);
int main()
{
    int number;
    cout << "Enter year ";
    cin >> number;
    cout << leap(number);
}
string leap(int num)
{
    string status;
    if (num % 4 == 0 && (num % 100 == 0) && (num % 400 == 0))
    {
        status = "leap year";
    }
    if (num % 4 == 0 && (num % 100 == 0) && (num % 400 != 0))
    {
        status = "no leap year";
    }
    if (num % 4 == 0 && (num % 100 != 0))
    {
        status = "leap year";
    }
    if(num % 4 != 0)
        {
            status = " no leap year";
        }
    
    return status;
}