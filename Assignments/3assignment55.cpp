#include<iostream>
using namespace std;

void CalculateSteps(int steps[])
{
    int count = 0;
    int maximum = steps[0];

    for(int i = 0; i < 7; i++)
    {
        if(steps[i] < 0)
        {
            cout << "Invalid input." << endl;
            return;
        }

        if(steps[i] >= 10000)
        {
            count++;
        }

        if(steps[i] > maximum)
        {
            maximum = steps[i];
        }
    }

    cout << "Goal Achieved Days: " << count << endl;
    cout << "Maximum Steps in Week: " << maximum << endl;

    return;
}

int main()
{
    int steps[7];

    cout << "Enter steps for 7 days: ";

    for(int i = 0; i < 7; i++)
    {
        cin >> steps[i];
    }

    CalculateSteps(steps);

    return 0;
}