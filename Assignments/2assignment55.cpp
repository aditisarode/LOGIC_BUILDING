#include<iostream>
using namespace std;

void CheckVotes(int N)
{
    int id[100];
    int valid = 0;
    int duplicate = 0;

    if(N < 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    for(int i = 0; i < N; i++)
    {
        cout << "Enter voter ID: ";
        cin >> id[i];

        if(id[i] < 0)
        {
            cout << "Invalid input." << endl;
            return;
        }

        bool found = false;

        for(int j = 0; j < i; j++)
        {
            if(id[i] == id[j])
            {
                found = true;
                break;
            }
        }

        if(found)
        {
            duplicate++;
        }
        else
        {
            valid++;
        }
    }

    cout << "Valid Votes: " << valid << endl;
    cout << "Rejected Duplicate Votes: " << duplicate << endl;

    return;
}

int main()
{
    int N;

    cout << "Enter number of votes: ";
    cin >> N;

    CheckVotes(N);

    return 0;
}