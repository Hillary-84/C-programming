#include <stdio.h>

int main() {
    int choice;

    
    printf("Option\tBundle\tCost(KES)\n");
    printf("1\t100 MB\t50\n");
    printf("2\t500 MB\t200\n");
    printf("3\t1 GB\t350\n");
    printf("4\t2 GB\t600\n");

    
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    
    switch (choice) {
        case 1:
            printf("You selected 100 MB bundle costing 50 KES\n");
            break;
        case 2:
            printf("You selected 500 MB bundle costing 200 KES\n");
            break;
        case 3:
            printf("You selected 1 GB bundle costing 350 KES\n");
            break;
        case 4:
            printf("You selected 2 GB bundle costing 600 KES\n");
            break;
        default:
            printf("Invalid choice! Please select 1-4.\n");
    }

    return 0;
}