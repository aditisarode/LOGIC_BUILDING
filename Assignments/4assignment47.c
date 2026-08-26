#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>

int main()
{
    char FileName[30];
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

    iRet = lseek(fd, 0, SEEK_END);

    printf("File size is %d bytes\n", iRet);

    close(fd);

    return 0;
}