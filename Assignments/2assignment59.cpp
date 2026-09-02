#include<iostream>
#include<string>
using namespace std;

void CheckAnagram(string str1, string str2)
{
    if(str1.length() != str2.length())
    {
        cout << "Not Anagram" << endl;
        return;
    }

    int count[256] = {0};

    for(int i = 0; i < str1.length(); i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for(int i = 0; i < 256; i++)
    {
        if(count[i] != 0)
        {
            cout << "Not Anagram" << endl;
            return;
        }
    }

    cout << "Anagram" << endl;

    return;
}

int main()
{
    string str1;
    string str2;

    cout << "Enter first string : ";
    cin >> str1;

    cout << "Enter second string : ";
    cin >> str2;

    CheckAnagram(str1, str2);

    return 0;
}