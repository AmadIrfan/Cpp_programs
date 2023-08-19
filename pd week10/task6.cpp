#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void data();
void store();
void result();
string name[100];
int t_order[100];
int price[100];
int main()
{
    int option;
    cout << "Press 1 To Enter Data & 2 To Check Result:......";
    cin >> option;
    if (option == 1)
    {
        data();
    }
    if (option == 2)
    {
        result();
    }
}
void data()
{
    int custm;
    fstream file;
    string name;
    cout << "Number of customer your want to enter ";
    cin >> custm;
    for (int i = 0; i < custm; i++)
    {
        cout << "Enter custmer name: ";
        cin >> name[i];
        cout << "Enter total orders: ";
        cin >> t_order[i];
        for (int idx = 0; idx < t_order[i]; idx++)
        {
            cout << "Enter order" << (idx + 1) << " prices ";
            cin >> price[idx];
        }
        file.open("customer.txt", ios::out);
        file << name[i] << " " << t_order[i] << " "
             << "[";
        for (int j = 0; j < t_order[i]; j++)
        {
            cout << price[j] << ",";
        }
        cout << "]" << endl;
    }
    file.close();
}
void result()
{
}
void store()
{
}