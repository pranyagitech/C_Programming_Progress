#include <stdio.h>

int main()
{
   //To print the squares of all the numbers till the user given number
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   for(int i = 1;i<=n;i++){
       printf("%d\n",i*i);
  }
    
  return 0;
}
