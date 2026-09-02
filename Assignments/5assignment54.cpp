#include<iostream>
using namespace std;

void BookSeats(int rows, int cols, int bookedCount, int requestedCount)
{
    int booked[100][2];
    int requested[100][2];

    int rowPrice[5] = {100, 120, 150, 180, 200};

    if(rows <= 0 || cols <= 0 || bookedCount < 0 || requestedCount <= 0)
    {
        cout << "Invalid input." << endl;
        return;
    }

    for(int i = 0; i < bookedCount; i++)
    {
        cout << "Enter booked seat row and column: ";
        cin >> booked[i][0] >> booked[i][1];
    }

    for(int i = 0; i < requestedCount; i++)
    {
        cout << "Enter requested seat row and column: ";
        cin >> requested[i][0] >> requested[i][1];
    }

    for(int i = 0; i < requestedCount; i++)
    {
        if(requested[i][0] < 1 || requested[i][0] > rows ||
           requested[i][1] < 1 || requested[i][1] > cols)
        {
            cout << "Booking Failed: Invalid seat." << endl;
            return;
        }

        for(int j = 0; j < bookedCount; j++)
        {
            if(requested[i][0] == booked[j][0] &&
               requested[i][1] == booked[j][1])
            {
                cout << "Booking Failed: Seat already booked." << endl;
                return;
            }
        }
    }

    int totalCost = 0;

    for(int i = 0; i < requestedCount; i++)
    {
        totalCost = totalCost + rowPrice[requested[i][0] - 1];
    }

    if(requestedCount >= 6)
    {
        totalCost = totalCost - (totalCost * 10 / 100);
    }

    int remainingSeats = (rows * cols) - bookedCount - requestedCount;

    cout << "Booking Successful." << endl;
    cout << "Total Cost: Rs." << totalCost << endl;
    cout << "Remaining Seats: " << remainingSeats << endl;

    return;
}

int main()
{
    int rows;
    int cols;
    int bookedCount;
    int requestedCount;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter number of booked seats: ";
    cin >> bookedCount;

    cout << "Enter number of requested seats: ";
    cin >> requestedCount;

    BookSeats(rows, cols, bookedCount, requestedCount);

    return 0;
}