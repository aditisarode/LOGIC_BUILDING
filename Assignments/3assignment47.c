#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char FileName[30];
    char buffer[1024] = {'\0'};
    int fd = 0;
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd, buffer, sizeof(buffer))) > 0)
    {
        printf("%s", buffer);

        memset(buffer, '\0', sizeof(buffer));
    }

    close(fd);

    return 0;
}