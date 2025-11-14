#include<stdio.h>

int main()
{
    //to find the greatest of two numbers
    int num1, num2;
    printf("Enter 2 values: ");
    scanf("%d%d", &num1, &num2);
    
    if(num1>num2) { 
        printf("The greatest number is %d", num1);
    } else {
        printf("\nThe greatest number is %d", num2);
    }
    return 0;
}
