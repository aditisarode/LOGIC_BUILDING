#include<iostream>
using namespace std;

void ReverseDisplay(char *str)
{
    char *start = str;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            char *end = str - 1;

            while(start < end)
            {
                char temp = *start;
                *start = *end;
                *end = temp;

                start++;
                end--;
            }

            start = str + 1;
        }

        str++;
    }

    char *end = str - 1;

    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[50];

    cout << "Enter string : ";
    cin.getline(Arr, 50);

    ReverseDisplay(Arr);

    cout << Arr << endl;

    return 0;
}