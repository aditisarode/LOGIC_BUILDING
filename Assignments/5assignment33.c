#include <stdio.h>

void StrCatX(char *src, char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }
    while((*src != '\0'))
    {
        *dest = *src;
        src++;
        dest++;
        
    }
    *dest = '\0';
}
int main()
{
    char Arr[50] = "Marvellous Infosystems ";
    char Brr[30] = "Logic Building";

    StrCatX(Brr, Arr);

    printf("%s\n", Arr);

    return 0;
}