#include <stdio.h>

double calculateFare(double distance) {
    return distance * 50;
}

int main(void) {
    double distance;

    printf("Enter distance travelled (km): ");
    scanf("%lf", &distance);
    printf("Total fare: KSh. %.2f\n", calculateFare(distance));

    return 0;
}
