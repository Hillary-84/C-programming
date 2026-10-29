#include <stdio.h>

int main() {
    FILE *fp;
    double amount, totalSales = 0.0;
    
    fp = fopen("sales.txt", "r");
    
    if (fp == NULL) {
        printf("Error: sales.txt not found!\n");
        return 1;
    }
    
    
    while (fscanf(fp, "%lf", &amount) == 1) {
        totalSales += amount;
    }
    
    
    printf("Total sales for the day: %.2f\n", totalSales);
    
    
    fclose(fp);
    printf("File closed successfully.\n");
    
    return 0;
}