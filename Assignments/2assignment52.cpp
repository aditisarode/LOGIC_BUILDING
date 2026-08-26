#include<iostream>
#include<string>
using namespace std;

void CheckLoanEligibility(int age, int income, int score, string loan)
{
    if(age < 0 || income < 0 || score < 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(loan != "Yes" && loan != "No")
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(age < 21 || age > 60)
    {
        cout << "Loan Rejected: Age must be between 21 and 60." << endl;
        return;
    }

    if(income < 25000)
    {
        cout << "Loan Rejected: Monthly income must be at least Rs.25000." << endl;
        return;
    }

    if(score < 700)
    {
        cout << "Loan Rejected: Credit score must be at least 700." << endl;
        return;
    }

    if(loan == "Yes")
    {
        cout << "Loan Rejected: Existing unpaid loan." << endl;
        return;
    }

    cout << "Loan Approved" << endl;

    return;
}

int main()
{
    int age;
    int income;
    int score;
    string loan;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter monthly income: ";
    cin >> income;

    cout << "Enter credit score: ";
    cin >> score;

    cout << "Enter existing unpaid loan (Yes/No): ";
    cin >> loan;

    CheckLoanEligibility(age, income, score, loan);

    return 0;
}