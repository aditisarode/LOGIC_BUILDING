#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void DisplayFileInformation(char FileName[])
{
    struct stat sobj;

    stat(FileName, &sobj);

    printf("File Name : %s\n", FileName);
    printf("Inode Number : %llu\n", sobj.st_ino);
    printf("File Size : %d\n", (long long)sobj.st_size);
}

int main()
{   
    char Fname[30] = {'\0'};

    printf("Enter the file name : \n");
    scanf("%[^'\n']s", Fname);

    DisplayFileInformation(Fname);
    
    return 0;
}