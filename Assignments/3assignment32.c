#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }
        iIndex++;
        str++;
    }
    return -1;
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

    iRet = FirstChar(Arr, cValue);

    if(iRet == -1)
    {
    printf("Character not found.\n");
    }
    else
    {
    printf("First occurrence at index : %d\n", iRet);
    }
    return 0;
}