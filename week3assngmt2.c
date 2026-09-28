#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("water units consumed: ");
    scanf("%d", &units);
    
    printf("total water bill: ");
    scanf("%.2f Ksh", &bill);

    if (units <= 30) {
        bill = units * 20;
    }
    else if (units <= 60) {
        bill = units * 25; 
    }
    else if(units >=60){
        bill = units * 30; 
    }

    return 0;
}