#include <stdio.h>

struct Vehicle {
    char regNo[20];
    char model[30];
    char manufacturer[30];
    int year;
    float dailyCharge;
};

int main() {
    struct Vehicle v;
    
    printf("Enter Registration Number: ");
    scanf("%s", v.regNo);
    printf("Enter Vehicle Model: ");
    scanf("%s", v.model);
    printf("Enter Manufacturer: ");
    scanf("%s", v.manufacturer);
    printf("Enter Year of Manufacture: ");
    scanf("%d", &v.year);
    printf("Enter Daily Rental Charge: ");
    scanf("%f", &v.dailyCharge);
    
    printf("\n\tVEHICLE REGISTRATION REPORT\n");
    printf("\t-----------------------------\n");
    printf("\tRegistration No. : %s\n", v.regNo);
    printf("\tVehicle Model    : %s\n", v.model);
    printf("\tManufacturer     : %s\n", v.manufacturer);
    printf("\tYear Manufactured: %d\n", v.year);
    printf("\tDaily Rental Fee : Ksh %.2f\n", v.dailyCharge);
    
    return 0;
}