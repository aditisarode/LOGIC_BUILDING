#include<iostream>
#include<string>
using namespace std;

void PrintDuplicate(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        for(int j = i + 1; j < str.length(); j++)
        {
            if(str[i] == str[j])
            {
                bool found = false;

                for(int k = 0; k < i; k++)
                {
                    if(str[i] == str[k])
                    {
                        found = true;
                        break;
                    }
                }

                if(found == false)
                {
                    cout << str[i] << " ";
                }

                break;
            }
        }
    }

    return;
}

int main()
{
    string str;

    cout << "Enter string : ";
    cin >> str;

    PrintDuplicate(str);

    return 0;
}