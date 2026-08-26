#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char FileName[30];
    char String[100];
    int fd = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    printf("Enter string: ");
    scanf(" %[^\n]s", String);

    fd = open(FileName, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    write(fd, String, strlen(String));

    printf("String written successfully at the end of file\n");

    close(fd);

    return 0;
}