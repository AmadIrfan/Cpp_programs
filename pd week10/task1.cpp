#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void getcake(string name, int age);
void gatedata();
// string checker(string line, int column);
int main()
{
    string name;
    int age;
    cout << "Enter name ";
    cin >> name;
    cout << "Enter age ";
    cin >> age;
    getcake(name, age);
    gatedata();
    return 0;
}
void getcake(string name, int age)
{
    fstream file;
    file.open("birthday.txt", ios::out);
    file << name << "," << age << endl;
    file.close();
}
void gatedata()
{
    int final;
    string line, newname;
    fstream file;
    file.open("birthday.txt", ios::in);
    while (file.eof())
    {
        // getline(file, line);
        file >> line;
        // newname = checker(line, 1);
        // string age = checker(line, 2);
        // final = (stoi(age));
        cout << line;
    }
    file.close();
    // cout << newname;
    // if (final % 2 == 0)
    // {
    //     // cout << "#################" << endl;
    //     // cout << "#" << final << newname << "!" << final << "#" << endl;
    //     // cout << "#################" << endl;
    // }
    // if (final % 2 != 0)
    // {
    //     cout << "*****************" << endl;
    //     cout << "#" << final << newname << "!" << final << "#" << endl;
    //     cout << "*****************" << endl;
    // }
}
// string checker(string line, int column)
// {

//     int commansCount = 1;
//     string item;
//     int index = 0;
//     while (true)
//     {

//         char ch = line[index];
//         if (ch == '\0')
//             return item;
//         if (ch == ',')
//         {
//             commansCount++;
//         }
//         else if (commansCount == column)
//         {
//             item = item + ch;
//         }
//         index++;
//     }
//     return item;
// }