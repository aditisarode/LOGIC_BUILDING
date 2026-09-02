#include<iostream>
#include<string>
using namespace std;

void CheckPalindrome(string str)
{
    int iStart = 0;
    int iEnd = str.length() - 1;

    while(iStart < iEnd)
    {
        if(str[iStart] != str[iEnd])
        {
            cout << "Not Palindrome String" << endl;
            return;
        }

        iStart++;
        iEnd--;
    }

    cout << "Palindrome String" << endl;

    return;
}

int main()
{
    string str;

    cout << "Enter string : ";
    cin >> str;

    CheckPalindrome(str);

    return 0;
}