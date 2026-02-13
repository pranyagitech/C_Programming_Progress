#include <stdio.h>
int main() 
{
    char str[100];
    int i = 0;

    printf("Enter string: ");
    fgets(str, 100, stdin);

    while(str[i] != '\0')
        i++;

    printf("Length = %d", i-1);  // -1 if newline included

    return 0;
}
