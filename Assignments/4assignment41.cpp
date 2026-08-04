#include <iostream>
using namespace std;

template <class T>
int SearchLast(T *Arr, int iSize, T iNo)
{
    int i = 0;
    int iLast = -1;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iLast = i + 1;
        }
    }
    return iLast;
}

int main()
{
    int Brr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = 0;

    iRet = SearchLast(Brr, 9, 40);

    cout<<iRet<<endl;
    
    return 0;
}