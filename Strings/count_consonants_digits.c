#include<stdio.h>
int main()
{
  char str[100];
  int cons = 0;
  int digits = 0;
  int vowels = 0;

  fgets (str, 100, stdin);

  int i = 0;
  while (str[i] != '\0')
    {
      if ( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <=  'Z'))
      {
        if ( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] ==  'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
          vowels++;
        else
          cons++;
      }
      if ( str[i] >= '0' && str[i] <= '9')
        digits++;

      i++;
    }

  printf("Consonants: %d\nDigits: %d", cons, digits);

  return 0;
}
