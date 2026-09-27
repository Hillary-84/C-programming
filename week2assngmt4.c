#include <stdio.h>
#include <math.h>

int main() {
    float principal, time, rate, ci, amount;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter time (years): ");
    scanf("%f", &time);
    
    printf("Enter rate: ");
    scanf("%f", &rate);
    
    amount = principal * pow((1 + rate/100), time);
    ci = amount - principal;
    
    printf("Compound Interest = %.2f\n", ci);
    printf("Total Amount = %.2f\n", amount);
    
    return 0;
}