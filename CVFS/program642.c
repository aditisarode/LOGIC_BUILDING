#include <stdio.h>>

int main()
{
    #ifdef _WIN32
    system("dir");
    printf("Project is running on Windows platform\n");

    #else
    printf("Project is running on Linux/MacOs platform\n");

    #endif

    return 0;
}