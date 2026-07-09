#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while((*src != '\0'))
    {
        if((*src >= 'a') && (*src <= 'z'))
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
    char Arr[30] = "Marvellous multi OS";
    char Brr[30];

    StrCpySmall(Arr, Brr);

    printf("%s\n", Brr);

    return 0;
}