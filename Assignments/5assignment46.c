#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#include <string.h>

void DisplayN(char FName[], int iSize)
{
    int fd = 0;
    char buffer[1024] = {'\0'};
    int iRet = 0;

    fd = open(FName, O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }

    iRet = read(fd, buffer, iSize);

    if (iRet > 0)
    {
        buffer[iRet] = '\0';
        printf("%s\n", buffer);
    }

    memset(buffer, '\0', sizeof(buffer));

    close(fd);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter the number of characters: ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}