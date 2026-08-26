#include<iostream>
#include<string>
using namespace std;

void CalculateFare(int distance, string peak)
{
    int fare = 50;

    if(distance < 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(peak != "Yes" && peak != "No")
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(distance <= 10)
    {
        fare = fare + (distance * 12);
    }
    else
    {
        fare = fare + (10 * 12);
        fare = fare + ((distance - 10) * 15);
    }

    if(peak == "Yes")
    {
        fare = fare + (fare * 20 / 100);
    }

    cout << "Distance: " << distance << " km" << endl;
    cout << "Peak Hour: " << peak << endl;
    cout << "Total Fare: Rs." << fare << endl;

    return;
}

int main()
{
    int distance;
    string peak;

    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter peak hour (Yes/No): ";
    cin >> peak;

    CalculateFare(distance, peak);

    return 0;
}