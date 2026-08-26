#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#include <string.h>

int CountChar(char FName[], char ch)
{
    int fd = 0;
    char buffer[1024] = {'\0'};
    int i = 0;
    int count = 0;
    int iRet = 0;

    fd = open(FName, O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while ((iRet = read(fd, buffer, sizeof(buffer))) > 0)
    {
        for (i = 0; i < iRet; i++)
        {
            if (buffer[i] == ch)
            {
                count++;
            }
        }

        memset(buffer, '\0', sizeof(buffer));
    }

    close(fd);

    return count;
}

int main()
{
    char FileName[30];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter character to count: ");
    scanf(" %c", &cValue);

    iRet = CountChar(FileName, cValue);

    printf("Frequency is : %d\n", iRet);

    return 0;
}