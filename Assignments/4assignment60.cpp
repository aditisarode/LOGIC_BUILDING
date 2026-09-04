#include<iostream>
#include<string>
using namespace std;

void CountVowelsConsonants(string str)
{
    int iVowels = 0;
    int iConsonants = 0;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
           str[i] == 'o' || str[i] == 'u')
        {
            iVowels++;
        }
        else
        {
            iConsonants++;
        }
    }

    cout << "Vowels : " << iVowels << endl;
    cout << "Consonants : " << iConsonants << endl;
}

int main()
{
    string str;

    cout << "Enter string : ";
    cin >> str;

    CountVowelsConsonants(str);

    return 0;
}