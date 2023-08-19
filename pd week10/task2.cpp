#include <iostream>
#include <fstream>
using namespace std;
fstream file;
void store(string input);
void miss_character(string character);
int main()
{
    string put;
    cout << "Enter string containing only letters from a to z ";
    cin >> put;
    store(put);
    miss_character(put);
    return 0;
}
void store(string alpha)
{
    file.open("alphabets.txt", ios::out);
    file << alpha << endl;
    file.close();
}
void miss_character(string character)
{
    int length = sizeof(character) / sizeof(character[0]);
    const int maximum = 26;
    bool present[maximum] = {false};
    for (int i = 0; i < length; i++)
    {
        if (character[i] >= 'a' && character[i] <= 'z')
        {
            present[character[i] - 'a'] = true;
        }
    }
    string result = "";
    for (int i = 0; i < maximum; i++)
    {
        if (present[i] == false)
        {
            result.push_back((char)(i + 'a'));
        }
    }
    file.open("alphabets.txt", ios::app);
    file << result << endl;
    file.close();
//  << result << endl;
}