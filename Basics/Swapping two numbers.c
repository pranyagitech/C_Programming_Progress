#include <stdio.h>
int main()
{ 
    //to swap two numbers using thied variable
    int num1 = 5, num2 = 9, num3;
    num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("After swapping of both numbers num1 = %d", num1);
    printf("\nAfter swapping of both numbers num2 = %d", num2);
    return 0;
}
