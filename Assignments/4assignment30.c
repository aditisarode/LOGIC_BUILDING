#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowels(char *str)
{ 
    while(*str != '\0')
     {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') ||
           (*str == 'o') || (*str == 'u') ||
           (*str == 'A') || (*str == 'E') || (*str == 'I') ||
           (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    bRet = ChkVowels(Arr);

    if(bRet == TRUE)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("Not contain vowel");
    }
    return 0;
}