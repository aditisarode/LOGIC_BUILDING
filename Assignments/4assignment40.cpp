#include <iostream>
using namespace std;

template <class T>
T Max(T *Arr, int iSize)
{
    int i = 0;
    T iMax = Arr[0];

    for(i = 1; i < iSize; i++)
    {
       if(Arr[i] > iMax)
       {
        iMax = Arr[i];
       }
    }

    return iMax;
}

int main()
{
    int Brr[] = {10, 20, 30, 40, 50};
    float Crr[] = {10.7f, 3.7f, 9.8f, 8.7f};

    int iRet = 0;
    float fRet = 0;

    iRet = Max(Brr, 5);
    cout<<iRet<<endl;

    fRet = Max(Crr, 4);
    cout<<fRet<<endl;

    return 0;
}