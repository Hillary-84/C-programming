#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    float r, h, volume, surfaceArea;
    
    printf("Enter radius of cylinder:\n ");
    scanf("%f", &r);
    
    printf("Enter height of cylinder:\n ");
    scanf("%f", &h);
    
    volume = PI * r * r * h;
    surfaceArea = 2 * PI * r * r + 2 * PI * r * h;
    
    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surfaceArea);
    
    return 0;
}