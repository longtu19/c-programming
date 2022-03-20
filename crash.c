#include <stdio.h>

// func modifyStr crashes by writing to read-only memory segment
void modifyStr(char *str)
{

    // writing to read-only memory segment
    *str = 'a';
    printf("%c\n", *str);
}

int main()
{
    char *a = "Hi";

    modifyStr(a);
    return 0;
}