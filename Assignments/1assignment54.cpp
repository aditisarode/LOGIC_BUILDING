#include<iostream>
#include<string>
using namespace std;

void CalculateBill(int days, string wardType, int medicineBill,
                   int consultationFee, string insured)
{
    int roomCharge;
    int totalBill;
    int insuranceCover = 0;
    int finalPay;

    if(days < 0 || medicineBill < 0 || consultationFee < 0)
    {
        cout << "Invalid input" << endl;
        return;
    }

    if(wardType != "Normal" && wardType != "ICU")
    {
        cout << "Invalid ward type" << endl;
        return;
    }

    if(insured != "Yes" && insured != "No")
    {
        cout << "Invalid insurance type" << endl;
        return;
    }

    roomCharge = 0;

    totalBill = consultationFee + medicineBill + (roomCharge * days);

    if(wardType == "ICU")
    {
    }

    if(insured == "Yes")
    {
        insuranceCover = totalBill * 70 / 100;

        if(insuranceCover > 50000)
        {
            insuranceCover = 50000;
        }
    }

    finalPay = totalBill - insuranceCover;

    cout << "Total Bill: Rs." << totalBill << endl;
    cout << "Insurance Cover: Rs." << insuranceCover << endl;
    cout << "Final Pay: Rs." << finalPay << endl;

    return;
}

int main()
{
    int days;
    int medicineBill;
    int consultationFee;
    string wardType;
    string insured;

    cout << "Enter number of days: ";
    cin >> days;

    cout << "Enter ward type (Normal/ICU): ";
    cin >> wardType;

    cout << "Enter medicine bill: ";
    cin >> medicineBill;

    cout << "Enter consultation fee: ";
    cin >> consultationFee;

    cout << "Enter insured (Yes/No): ";
    cin >> insured;

    CalculateBill(days, wardType, medicineBill, consultationFee, insured);

    return 0;
}