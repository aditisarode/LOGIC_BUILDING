#include<iostream>
using namespace std;

void CheckScholarship(int marks, int attendance, int income)
{
    if(marks < 0 || marks > 100 ||
       attendance < 0 || attendance > 100 ||
       income < 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(marks < 80)
    {
        cout << "Scholarship Rejected: Marks must be at least 80%." << endl;
        return;
    }

    if(attendance < 75)
    {
        cout << "Scholarship Rejected: Attendance must be at least 75%." << endl;
        return;
    }

    if(income > 300000)
    {
        cout << "Scholarship Rejected: Family income must not exceed Rs.300000." << endl;
        return;
    }

    cout << "Scholarship Approved" << endl;

    return;
}

int main()
{
    int marks;
    int attendance;
    int income;

    cout << "Enter marks percentage: ";
    cin >> marks;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    cout << "Enter family income: ";
    cin >> income;

    CheckScholarship(marks, attendance, income);

    return 0;
}