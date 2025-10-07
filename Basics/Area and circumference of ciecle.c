#include <stdio.h>

int main()
{
    int radius= 3;
    const float pi = 3.14;
    float circumference= 2*pi*radius;
    float area = pi*radius*radius;
    
    printf("The Area of Circle = %f", area);
    printf("\nThe circumference of circle = %f", circumference);

    return 0;
}
