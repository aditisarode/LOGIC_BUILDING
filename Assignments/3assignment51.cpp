#include<iostream>
using namespace std;

void CalculateResult(int m1, int m2, int m3, int m4, int m5)
{
    if(m1 < 0 || m1 > 100 ||
       m2 < 0 || m2 > 100 ||
       m3 < 0 || m3 > 100 ||
       m4 < 0 || m4 > 100 ||
       m5 < 0 || m5 > 100)
    {
        cout << "Invalid input." << endl;
        return;
    }

    if(m1 < 35 || m2 < 35 || m3 < 35 || m4 < 35 || m5 < 35)
    {
        cout << "Result: Fail" << endl;
        return;
    }

    float average = (m1 + m2 + m3 + m4 + m5) / 5.0;

    cout << "Average Marks: " << average << endl;

    if(average >= 75)
    {
        cout << "Final Result: Distinction" << endl;
    }
    else if(average >= 60)
    {
        cout << "Final Result: First Class" << endl;
    }
    else if(average >= 50)
    {
        cout << "Final Result: Second Class" << endl;
    }
    else
    {
        cout << "Final Result: Pass" << endl;
    }

    return;
}

int main()
{
    int m1, m2, m3, m4, m5;

    cout << "Enter marks of five subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    CalculateResult(m1, m2, m3, m4, m5);

    return 0;
}