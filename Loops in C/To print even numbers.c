#include <stdio.h>

int main()
{
    // To print all the even numbers between zero and the user given input
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
       if(i%2==0){
        printf("%d\n",i);}
    }
    return 0;
}
