#include <stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;
    end = str;
    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    printf("\n");
}
int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr);
    
    printf("Modified string : %s\n", Arr);
    
    return 0;
}