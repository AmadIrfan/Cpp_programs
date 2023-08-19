#include <iostream>
#include <fstream>
using namespace std;
void store(string input);
void process();
int main()
{
    string input;
    cout << "Enter A String: ";
    getline(cin, input);
    store(input);
    process();
    return 0;
}
void store(string input)
{
    fstream file;
    file.open("data.txt", ios::out);
    file << input << endl;
    file.close();
}
void process()
{
    int index = 0;
    string input;
    fstream file;
    file.open("data.txt", ios::in);
    getline(file, input);
    file.close();
    int length = sizeof(input) / sizeof(input[0]);
    for (int idx = 0; idx < length; idx++)
    {
        if (input[idx] == '\"')
        {
            index = idx;
            break;
        }
    }

    for (int idx = index; idx < 1000; idx++)
    {
        if (input[idx + 1] == '\"')
        {
            cout << input[idx] << "\"";
            break;
        }
        else
        {
            cout << input[idx];
        }
    }
}