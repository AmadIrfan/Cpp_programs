#include <iostream>
#include <fstream>
using namespace std;
void secret(string character);
main()
{
    string character;
    cout << "Enter Your String: ";
    getline(cin, character);
    secret(character);
}
void secret(string character)
{
    fstream file;
    string result;
    int length = sizeof(character) / sizeof(character[0]);
    file.open("secret-file.txt", ios::out);
    for (int i = 0; i < length; i++)
    {
        if (character[i] == 'A' || character[i] == 'a')
        {
            result = ".-";
            file << result << " ";
        }
        else if (character[i] == 'b' || character[i] == 'B')
        {
            result = "-...";
            file << result << " ";
        }
        else if (character[i] == 'C' || character[i] == 'c')
        {
            result = "-.-.";
            file << result << " ";
        }
        else if (character[i] == 'D' || character[i] == 'd')
        {
            result = "-..";
            file << result << " ";
        }
        else if (character[i] == 'E' || character[i] == 'e')
        {
            result = ".";
            file << result << " ";
        }
        else if (character[i] == 'F' || character[i] == 'f')
        {
            result = "..-.";
            file << result << " ";
        }
        else if (character[i] == 'G' || character[i] == 'g')
        {
            result = "--.";
            file << result << " ";
        }
        else if (character[i] == 'H' || character[i] == 'h')
        {
            result = "....";
            file << result << " ";
        }
        else if (character[i] == 'I' || character[i] == 'i')
        {
            result = "..";
            file << result << " ";
        }
        else if (character[i] == 'J' || character[i] == 'j')
        {
            result = ".---";
            file << result << " ";
        }
        else if (character[i] == 'K' || character[i] == 'k')
        {
            result = "-.-";
            file << result << " ";
        }
        else if (character[i] == 'L' || character[i] == 'l')
        {
            result = ".-..";
            file << result << " ";
        }
        else if (character[i] == 'M' || character[i] == 'm')
        {
            result = "--";
            file << result << " ";
        }
        else if (character[i] == 'N' || character[i] == 'n')
        {
            result = "-.";
            file << result << " ";
        }
        else if (character[i] == 'O' || character[i] == 'o')
        {
            result = "---";
            file << result << " ";
        }
        else if (character[i] == 'P' || character[i] == 'p')
        {
            result = ".--.";
            file << result << " ";
        }
        else if (character[i] == 'Q' || character[i] == 'q')
        {
            result = "--.-";
            file << result << " ";
        }
        else if (character[i] == 'R' || character[i] == 'r')
        {
            result = ".-.";
            file << result << " ";
        }
        else if (character[i] == 'S' || character[i] == 's')
        {
            result = "...";
            file << result << " ";
        }
        else if (character[i] == 'T' || character[i] == 't')
        {
            result = "-";
            file << result << " ";
        }
        else if (character[i] == 'U' || character[i] == 'u')
        {
            result = "..-";
            file << result << " ";
        }
        else if (character[i] == 'V' || character[i] == 'v')
        {
            result = "...-";
            file << result << " ";
        }
        else if (character[i] == 'W' || character[i] == 'w')
        {
            result = ".--";
            file << result << " ";
        }
        else if (character[i] == 'X' || character[i] == 'x')
        {
            result = "-..-";
            file << result << " ";
        }
        else if (character[i] == 'Y' || character[i] == 'y')
        {
            result = "-.--";
            file << result << " ";
        }
        else if (character[i] == 'Z' || character[i] == 'z')
        {
            result = "--..";
            file << result << " ";
        }
        else if (character[i] == ' ')
        {
            result = "-.-.-.- ";
            file << result << " ";
        }
    }
    file.close();
    string data;
    file.open("secret-file.txt", ios::in);
    getline(file, data);
    file.close();
    cout << data;
}