#include <stdio.h>

double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main(void) {
    double f;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &f);
    printf("Temperature in Celsius: %.2f\n", convertToCelsius(f));

    return 0;
}
