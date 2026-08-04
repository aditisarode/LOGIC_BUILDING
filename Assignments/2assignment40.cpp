#include <iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
    if(no1 >= no2 && no1 >= no3)
    {
        return no1;
    }
    else if(no2 >= no1 && no2 >= no3)
    {
        return no2;
    }
    else
    {
        return no3;
    }
}

int main()
{
    int iRet = Max(10, 20, 30);
    cout<<iRet<<endl;

    float fRet = Max(10.0f, 22.4f, 56.4f);
    cout<<fRet<<endl;

    return 0;
}