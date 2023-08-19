#include <iostream>
using namespace std;
void pers(int num);
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    pers(num);
}

void pers(int num)
{
    int number, second = 0, second1, third = 0, third1, fourth = 0, fourth1;
    for (int i = 1; i <= num; i++)3
    {
        cout << "Enter a number B/W 1 to 1000  ";
        cin >> number;
        if (number % 2 == 0)
        {
            second++;
            second1 = (second / num) * 100;
        }
        if (number % 3 == 0)
        {
            third++;
            third1 = (third / num) * 100;
        }
        if (number % 4 == 0)
        {
            fourth++;
            fourth1 = (fourth / num) * 100;
        }
    }
    cout << second1 << endl;
    cout << third1 << endl;
    cout << fourth1 << endl;
}