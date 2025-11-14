#include<stdio.h>
int main()
{
    // to calculate simple interest 
    int P, R, T;
    printf("Enter P(principal), R(Rate of interest), T(time period in years)");
    scanf("%d%d%d", &P, &R, &T);
    float S;
    S = (P*R*T)*0.01;
    printf("The simple interest is %.2f", S);
    
    return 0;
}
