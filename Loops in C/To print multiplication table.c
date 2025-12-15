#include<stdio.h>
int main()
{
  int num;
  prinf("Enter the number whose table to generate: ");
  scanf("%d", &num);

  printf("Table of %d \n",num);

  int i = 1;
  while(i<=10)
  {
    printf("%d X %d = %d\n", num, i, num*i);
    i++;
  }
  
  retun 0;
}
