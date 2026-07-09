#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while((*src != '\0'))
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
             dest++;
        }
            src++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrCpyCap(Arr, Brr);

    printf("%s", Brr);

    return 0;
}