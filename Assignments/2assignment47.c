#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    fd = creat(FileName, 0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }
    else
    {
        
        printf("File created successfully.\n");

        close(fd);
    }

    return 0;
}