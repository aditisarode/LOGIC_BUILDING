#include<iostream>
using namespace std;

void ReverseRow(int Arr[][50], int iRow, int iCol)
{
    for(int i = 0; i < iRow; i++)
    {
        int iStart = 0;
        int iEnd = iCol - 1;

        while(iStart < iEnd)
        {
            int iTemp = Arr[i][iStart];
            Arr[i][iStart] = Arr[i][iEnd];
            Arr[i][iEnd] = iTemp;

            iStart++;
            iEnd--;
        }
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

    ReverseRow(Arr, iRow, iCol);

    cout << "Matrix after reversing each row : " << endl;

    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            cout << Arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}