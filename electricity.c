#include <stdio.h>

float calculateBill(int units) {
    float bill ;

    if (units <= 100) {
        bill = units * 10; 
    }
    else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15; 
    }
    else if( units >=200){
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20; 
    }
    
    return bill;
}


int main() {
    int units;
    float totalBill;

    
    printf("Enter number of units consumed: ");
    scanf("%d", & units  );

    
    totalBill = calculateBill(units);

    
    printf("--- Electricity Bill ---\n");
    printf("Units Consumed: %d\n", units);
    printf("Total Bill: KSh %.2f\n", totalBill);

    return 0;
}