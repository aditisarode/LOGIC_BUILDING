#include<iostream>
#include<string>
using namespace std;

void CalculateFare(int distance, string classType, int bookingHoursBefore, int age)
{
    int fare = 0;

    if(distance < 0 || bookingHoursBefore < 0 || age < 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(classType != "Sleeper" && classType != "3AC" && classType != "2AC")
    {
        cout << "Invalid class type." << endl;
        return;
    }

    if(classType == "Sleeper")
    {
        fare = distance * 1;
    }
    else if(classType == "3AC")
    {
        fare = distance * 2;
    }
    else
    {
        fare = distance * 3;
    }

    if(bookingHoursBefore <= 24)
    {
        fare = fare + (fare * 30 / 100);
    }

    if(age >= 60)
    {
        fare = fare - (fare * 40 / 100);
    }

    cout << "Final Fare: Rs." << fare << endl;

    return;
}

int main()
{
    int distance;
    string classType;
    int bookingHoursBefore;
    int age;

    cout << "Enter distance: ";
    cin >> distance;

    cout << "Enter class type (Sleeper/3AC/2AC): ";
    cin >> classType;

    cout << "Enter booking hours before: ";
    cin >> bookingHoursBefore;

    cout << "Enter age: ";
    cin >> age;

    CalculateFare(distance, classType, bookingHoursBefore, age);

    return 0;
}