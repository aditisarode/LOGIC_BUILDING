#include <stdio.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           iPos = iIndex;
        }
        iIndex++;
        str++;
    }
    return iPos;
}
int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr, cValue);

    if(iRet == -1)
    {
    printf("Character not found.\n");
    }
    else
    {
    printf("Last occurrence at index : %d\n", iRet);
    }
    return 0;
}