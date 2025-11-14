#include<stdio.h>

int main()
{
    //To find Positive, Negative or Zero
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("The number is Positive");
    } else if (num < 0) {
        printf("The number is Negative");
    } else {
        printf("The number is Zero");
    }
    
    return 0;
