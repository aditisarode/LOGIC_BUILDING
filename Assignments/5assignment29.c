#include <stdio.h>

void DisplayASCII(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("HexaDecimal : %X\n",ch);

}
int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    DisplayASCII(cValue);

    return 0;
}
