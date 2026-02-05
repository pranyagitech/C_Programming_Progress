#include <stdio.h>

int main()
{ 
  char s[100];
  int i, count = 0;

  printf("Enter a string: ");
  fgets(s);

  for (i = 0; s[i] != '\0'; i++) 
  {
    if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') 
    {
      count++;
    }
  }
            
    return count;
}
