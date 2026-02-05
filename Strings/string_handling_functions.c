#include <stdio.h>
#include <string.h>

int main() 
{
    char s1[100] = "Hello";
    char s2[100] = "World";
    char s3[100];

    printf("Length of s1: %d\n", strlen(s1));
    printf("Length of s2: %d\n", strlen(s2));

    strcpy(s3, s1);
    printf("Copied string: %s\n", s3);

    strcat(s1, s2);
    printf("Concatenated string: %s\n", s1);

    if (strcmp(s1, s2) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
  
    strrev(s1);
    printf("Reversed string: %s\n", s1);

    return 0;
}
