#include <stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    
    *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvellous multi OS";
    char Brr[30];

    StrNCpyX(Arr, Brr, 10);

    printf("%s", Brr);

    return 0;
}