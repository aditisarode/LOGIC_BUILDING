#include <stdio.h>

int main()
{
    char str[] = {'J','a','y','\0','G','a','n','e','s','h','\0'};

    printf("%s\n",str);            // bcoz first '\0' is after Jay that's why 
    return 0;
}