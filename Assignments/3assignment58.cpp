#include<iostream>
using namespace std;

void CheckSpy(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iProduct = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;
        iProduct = iProduct * iDigit;

        iNo = iNo / 10;
    }

    if(iSum == iProduct)
    {
        cout << "Spy Number" << endl;
    }
    else
    {
        cout << "Not Spy Number" << endl;
    }
}

int main()
{
    int iNo;

    cout << "Enter number : ";
    cin >> iNo;

    CheckSpy(iNo);

    return 0;
}