#include<iostream>
#include<string>
using namespace std;

void CheckPangram(string str)
{
    int count[26] = {0};

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a'] = 1;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            count[str[i] - 'A'] = 1;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(count[i] == 0)
        {
            cout << "Not Pangram" << endl;
            return;
        }
    }

    cout << "Pangram" << endl;

    return;
}

int main()
{
    string str;

    cout << "Enter sentence : ";
    getline(cin, str);

    CheckPangram(str);

    return 0;
}