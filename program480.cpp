#include <iostream>
using namespace std;

template <class X>
X Maximum(X No1, X No2, X No3)
{
    if(No1 > No2 && No1 > No3)
    {
        return No1;
    }
    else if(No2 > No1 && No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    cout<<Maximum(21,51,7)<<"\n";
    cout<<Maximum(21.5,11.3,18.9)<<"\n";
    cout<<Maximum(21.5f,11.3f,18.9f)<<"\n";

    return 0;
}