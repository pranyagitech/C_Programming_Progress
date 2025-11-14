#include <stdio.h>

int main()
{
   //To print descending numbers from 10 upto the user given input
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   
   for(int i = 10;i>=n;i--){
       printf("%d\n",i);
   }
    return 0;
}
