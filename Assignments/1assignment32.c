#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
     if(*str == ch)
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
    char cValue;
    BOOL bRet = FALSE;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found.\n");
    }
    else
    {
        printf("Character not found.\n");
    }

    return 0;
}