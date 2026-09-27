#include <stdio.h>

float calculateDiscount(float purchaseAmount) {
    float discount;
    
    if (purchaseAmount < 5000) {
        discount = purchaseAmount * 0.05; 
    }
    else if (purchaseAmount >= 5000 && purchaseAmount <= 9999) {
        discount = purchaseAmount * 0.10; 
    }
    else if( purchaseAmount >= 10000) {
        discount = purchaseAmount * 0.15; 
    }
    
    return discount;
}


int main() {
    float purchaseAmount, discount, finalAmount;
    
    
    printf("Enter purchase amount (KSh): ");
    scanf("%f", &purchaseAmount);
    
    
    discount = calculateDiscount(purchaseAmount);
    
    
    finalAmount = purchaseAmount - discount;
    
    
    printf("--- supermarket discount ---\n");
    printf("Purchase Amount: KSh %.2f\n", purchaseAmount);
    printf("Discount Amount: KSh %.2f\n", discount);
    printf("Final Amount Payable: KSh %.2f\n", finalAmount);
    
    return 0;
}






