#include<iostream>
#include<string>
using namespace std;

void Frequency(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        int iCount = 1;
        int iFlag = 0;

        for(int j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                iFlag = 1;
                break;
            }
        }

        if(iFlag == 0)
        {
            for(int j = i + 1; j < str.length(); j++)
            {
                if(str[i] == str[j])
                {
                    iCount++;
                }
            }

            cout << str[i] << " : " << iCount << endl;
        }
    }

    return;
}

int main()
{
    string str;

    cout << "Enter string : ";
    cin >> str;

    Frequency(str);

    return 0;
}