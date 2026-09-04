#include<iostream>
#include<string>
using namespace std;

void RemoveDuplicate(string str)
{
    string result = "";

    for(int i = 0; i < str.length(); i++)
    {
        int iFlag = 0;

        for(int j = 0; j < result.length(); j++)
        {
            if(str[i] == result[j])
            {
                iFlag = 1;
                break;
            }
        }

        if(iFlag == 0)
        {
            result = result + str[i];
        }
    }

    cout << result << endl;
}

int main()
{
    string str;

    cout << "Enter string : ";
    cin >> str;

    RemoveDuplicate(str);

    return 0;
}