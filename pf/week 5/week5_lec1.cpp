#include <iostream>
using namespace std;
int main()
{
    int English, Math, Chemistry, Social_Science, Biology, total;
    float per;
    string grade, name;
    cout << " Enter Student Name: ";
    cin >> name;
    cout << " Enter marks of English ";
    cin >> English;
    cout << " Enter marks of Math ";
    cin >> Math;
    cout << " Enter marks of Chemistry ";
    cin >> Chemistry;
    cout << " Enter marks of Social_Science ";
    cin >> Social_Science;
    cout << " Enter marks of Biology ";
    cin >> Biology;
    total = English + Math + Chemistry + Social_Science + Biology;
    per = (total / 500.0) * 100.0;
    if (per >= 91 && per <= 100)
    {
        grade = "A+";
    }
    else if (per >= 81 && per <= 90)
    {
        /* code */
        grade = "A";
    }
    else if (per >= 71 && per <= 80)
    {
        grade = "B+";
        /* code */
    }
    else if (per >= 61 && per <= 70)
    {
        grade = "B";
        /* code */
    }
    else if (per >= 51 && per <= 60)
    {
        grade = "C";
        /* code */
    }
    else if (per >= 41 && per <= 50)
    {
        grade = "D";
        /* code */
    }
    else if (per >= 0 && per <= 40)
    {
        grade = "F";
        /* code */
    }

    cout << " Name: " << name << endl;

    cout << " Your English marks are: " << English << endl;
    cout << " Your Math marks are: " << Math << endl;
    cout << " Your Social sciences marks are: " << Social_Science << endl;
    cout << " Your Chemistry marks are: " << Chemistry << endl;
    cout << " Your Biology marks are: " << Biology << endl;
    cout << " Your total marks are: " << total << endl;
    cout << " Your total %age is: " << per << endl;
    cout << " Your Grade is: " << grade << endl;
}