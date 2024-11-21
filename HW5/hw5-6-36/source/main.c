#include <stdio.h>
#include <stdlib.h>

void stringReverse(const char* str) 
{
    if (*str == '\0')
        return;

    stringReverse(str + 1);
    putchar(*str);
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Reversed string: ");
    stringReverse(str);
    printf("\n");

    return 0;
}