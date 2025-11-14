#include <stdio.h>

int main()
{
   //To print the sum of n natural numbers given by user
   int n,sum=0;
   printf("Enter a number:");
   scanf("%d",&n);
   
   for(int i = 1;i<=n;i++){
       sum+=i;
   }
   printf("The Sum of %d natural numbers is %d", n, sum);
    return 0;
}
