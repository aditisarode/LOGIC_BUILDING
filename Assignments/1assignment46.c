#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#include <string.h>

int CountCapital(char FName[])
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
            if (buffer[i] >= 'A' && buffer[i] <= 'Z')
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
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);

    printf("Number of capital letters : %d\n", iRet);

    return 0;
}