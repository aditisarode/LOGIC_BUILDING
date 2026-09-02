#include<iostream>
using namespace std;

void CalculatePlan(int mins, int gb, int sms)
{
    int price[4] = {199, 299, 399, 499};
    int minLimit[4] = {100, 200, 300, 500};
    int dataLimit[4] = {10, 20, 30, 50};
    int smsLimit[4] = {100, 200, 300, 500};

    int cost[4];

    for(int i = 0; i < 4; i++)
    {
        cost[i] = price[i];

        if(mins > minLimit[i])
        {
            cost[i] = cost[i] + (mins - minLimit[i]);
        }

        if(gb > dataLimit[i])
        {
            cost[i] = cost[i] + ((gb - dataLimit[i]) * 20);
        }

        if(sms > smsLimit[i])
        {
            cost[i] = cost[i] + (sms - smsLimit[i]);
        }
    }

    int cheapest = 0;

    for(int i = 1; i < 4; i++)
    {
        if(cost[i] < cost[cheapest])
        {
            cheapest = i;
        }
    }

    cout << "Recommended Plan: Plan " << cheapest + 1 << endl;
    cout << "Total Cost: Rs." << cost[cheapest] << endl;

    return;
}

int main()
{
    int mins;
    int gb;
    int sms;

    cout << "Enter call minutes: ";
    cin >> mins;

    cout << "Enter data in GB: ";
    cin >> gb;

    cout << "Enter SMS count: ";
    cin >> sms;

    CalculatePlan(mins, gb, sms);

    return 0;
}