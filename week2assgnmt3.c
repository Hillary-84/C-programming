#include <stdio.h>

int main() {
    float principal, time, rate, si;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter time (years): ");
    scanf("%f", &time);
    
    printf("Enter rate: ");
    scanf("%f", &rate);
    
    si = (principal * time * rate) / 100;
    
    printf("Simple Interest = %.2f\n", si);
    
    return 0;
}