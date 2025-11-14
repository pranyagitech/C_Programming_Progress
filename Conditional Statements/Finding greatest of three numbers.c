#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter 3 values: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    if(num1>num2 && num1>num3) { 
        printf("The greatest number is %d", num1);
    } else if(num2>num1 && num2>num3) {
        printf("\nThe greatest number is %d", num2);
    } else if(num3>num1 && num3>num2){
        printf("\nThe greatest number is %d", num3);
    } else {
        printf("The numbers are equal");
    }
    
return 0;
}
