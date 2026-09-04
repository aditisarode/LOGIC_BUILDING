#include<iostream>
#include<string>
using namespace std;

void LongestWord(string str)
{
    string word = "";
    string longest = "";

    for(int i = 0; i <= str.length(); i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            word = word + str[i];
        }
        else
        {
            if(word.length() > longest.length())
            {
                longest = word;
            }

            word = "";
        }
    }

    cout << "Longest word : " << longest << endl;

    return;
}

int main()
{
    string str;

    cout << "Enter sentence : ";
    getline(cin, str);

    LongestWord(str);

    return 0;
}