#include<iostream>
#include<string>
using namespace std;

void CheckRotation(string str1, string str2)
{
    if(str1.length() != str2.length())
    {
        cout << "Not Rotation" << endl;
        return;
    }

    for(int i = 0; i < str1.length(); i++)
    {
        char ch = str1[0];

        for(int j = 0; j < str1.length() - 1; j++)
        {
            str1[j] = str1[j + 1];
        }

        str1[str1.length() - 1] = ch;

        if(str1 == str2)
        {
            cout << "Rotation" << endl;
            return;
        }
    }

    cout << "Not Rotation" << endl;
}

int main()
{
    string str1;
    string str2;

    cout << "Enter first string : ";
    cin >> str1;

    cout << "Enter second string : ";
    cin >> str2;

    CheckRotation(str1, str2);

    return 0;
}