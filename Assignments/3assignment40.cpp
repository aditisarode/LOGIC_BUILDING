#include <iostream>
using namespace std;

template <class T>
T AddN(T *Arr, int iSize)
{
    T iSum = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    return iSum;
}

int main()
{
    int Brr[] = {10, 20, 30, 40, 50};
    float Crr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iRet = 0;
    float fRet = 0;

    iRet = AddN(Brr, 5);

    cout<<iRet<<endl;

    fRet = AddN(Crr, 4);

    cout<<fRet<<endl;

    return 0;
}