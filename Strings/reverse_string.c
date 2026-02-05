#include <stdio.h>
#include <string.h>

int main()
{
  int len = strlen(s);
  char rev[100];  
  char s[100];
  int i, j = 0;

  printf("Enter a string: ");
  fgets(s);
  
  rev[j] = '\0';   
  
  for (i = len - 1; i >= 0; i--) 
  {
    rev[j] = s[i];
    j++;
  }
  printf("Reversed string: %s\n", rev);

  return 0;
}
