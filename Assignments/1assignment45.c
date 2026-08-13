#include <stdio.h>

int WhiteSpace(char *str)
{
    if(*str == '\0')        
    {
        return 0;
    }

    if(*str == ' ')         
    {
        return 1 + WhiteSpace(str + 1);
    }
    else                    
    {
        return WhiteSpace(str + 1);
    }
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]", Arr);

    iRet = WhiteSpace(Arr);

    printf("Number of white spaces : %d\n", iRet);

    return 0;
}