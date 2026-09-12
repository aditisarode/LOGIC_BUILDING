#include<iostream>
using namespace std;

void AddColumn(int Arr[][50], int iRow, int iCol)
{
    int iSum = 0;

    for(int j = 0; j < iCol; j++)
    {
        iSum = 0;

        for(int i = 0; i < iRow; i++)
        {
            iSum = iSum + Arr[i][j];
        }

        cout << iSum << " ";
    }
}

int main()
{
    int Arr[50][50];
    int iRow, iCol;

    cout << "Enter number of rows : ";
    cin >> iRow;

    cout << "Enter number of columns : ";
    cin >> iCol;

    cout << "Enter matrix : " << endl;

    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cin >> Arr[i][j];
        }
    }

    cout << "Addition of each column : ";

    AddColumn(Arr, iRow, iCol);

    return 0;
}