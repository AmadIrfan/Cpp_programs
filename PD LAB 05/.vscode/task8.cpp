/*1. A student has to attend an exam at a particular time (for example, at 9:30 am). They arrive in
the exam room at a particular time of arrival (for example 9:40 am). It is considered that the
student has arrived on time if they have arrived at the time when the exam starts or up to half
an hour earlier. If the student has arrived more than 30 minutes earlier, the student has come
too early. If they have arrived after the time when the exam starts, they are late.
Write a program that inputs the exam starting time and the time of student's arrival, and prints if the
student has arrived on time, if they have arrived early or if they are late, as well as how many hours or
minutes the student is early or late.
Input Data
Read the following four integers (one on each line) from the console:
● The first line contains exam starting time (hours) – an integer from 0 to 23.
● The second line contains exam starting time (minutes) – an integer from 0 to 59.
● The third line contains an hour of arrival – an integer from 0 to 23.
● The fourth line contains minutes of arrival – an integer from 0 to 59.
Output Data
Print the following on the first line on the console:
● "Late", if the student arrives later compared to the exam starting time.
● "On time", if the student arrives exactly at the exam starting time or up to 30 minutes earlier.
● "Early", if the student arrives more than 30 minutes before the exam's starting time.
If the student arrives with more than one minute difference compared to the exam starting time, print on
the next line:
● "mm minutes before the start" for arriving less than an hour earlier.
● "hh:mm hours before the start" for arriving 1 hour or earlier. Always print minutes using 2
digits, for example "1:05".
● "mm minutes after the start" for arriving more than an hour late.
● "hh:mm hours after the start" for arriving late by 1 hour or more. Always print minutes using 2
digits, for example, "1:03".  */

#include <iostream>
using namespace std;
int main()
{
    int exam_time, exam_starting_min, exam_starting_hour,exam_hour, arrival_hour, arrival_min, time, arrival_time,exam_min;
    // taking input from urer
    cout << "Exam Starting Time in Hour.. ";
    cin >> exam_starting_hour;
    cout << "Exam Starting Time in min.. ";
    cin >> exam_starting_min;
    cout << "Arrival Time in Hour.. ";
    cin >> arrival_hour;
    cout << "Arrival Time in min.. ";
    cin >> arrival_min;
    exam_hour = exam_starting_hour * 60;
 exam_time = exam_starting_hour + exam_starting_min;
    arrival_hour = arrival_hour * 60;
    arrival_time = arrival_hour + arrival_min;
    time = exam_time - arrival_time;
    if (exam_time < arrival_time)
    {
        time = exam_time - arrival_time;
        if (time < 0)
        {
            time = (time * -1);
            if (time > 60 && time < 120)
            {
                time = time - 60;
                cout << "You arrived late By : 1 : " << time << "hours.";
            }
            if (time > 120 && time < 180)
            {
                time = time - 120;
                cout << "You arrived late By : 2: " << time << "hours.";
            }
            if (time > 180 && time < 240)
            {
                time = time - 180;
                cout << "You arrived Late By : 3 : " << time << "hours.";
            }
            if (time < 60)
            {
                cout << "You arrive late By : " << time << " minutes.";
            }
        }
    }
    if (exam_time > arrival_time)
    {
        time = exam_time - arrival_time;
        if (time > 30)
        {
            if (time < 30)
            {
                cout << "You Arrived on time.";
            }
            if (time < 60)
            {
                cout << "You Arrived Early By : " << time << "Min.";
            }
            if (time > 60 && time < 120)
            {
                time = time - 60;
                cout << "You Arrived Early By : 1 :" << time << " Hours.";
            }
            if (time > 120 && time < 180)
            {
                time = time - 120;
                cout << "You arrived Early By : 2 :" << time << " Hours.";
            }
            if (time > 180 && time < 240)
            {
                time = time - 180;
                cout << "You arrived Early By : 3:" << time << " Hours.";
            }
        }
    }
    // exam_time == arrival_time
    if (exam_time == arrival_time)
    {
        cout << "You Arrived on time.";
    }
}
