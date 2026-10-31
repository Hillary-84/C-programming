#include <stdio.h>

struct Employee {
    char empID[20];
    char name[50];
    char department[30];
    float basicSalary;
    float allowance;
};


float calculateSalary(struct Employee emp) {
    return emp.basicSalary + emp.allowance;
}

int main() {
    struct Employee employees[3];
    float gross;
    
    
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Employee %d:\n", i+1);
        printf("ID: "); scanf("%s", employees[i].empID);
        printf("Name: "); scanf("%s", employees[i].name);
        printf("Department: "); scanf("%s", employees[i].department);
        printf("Basic Salary: "); scanf("%f", &employees[i].basicSalary);
        printf("Allowance: "); scanf("%f", &employees[i].allowance);
    }
    
    
    printf("\n\t\tEMPLOYEE PAYROLL REPORT\n");
    printf("------------------------------------------------------------\n");
    printf("ID\t Name\t\t Department\t Gross Salary (Ksh)\n");
    printf("------------------------------------------------------------\n");
    
    for (int i = 0; i < 3; i++) {
        gross = calculateSalary(employees[i]);
        printf("%s\t %s\t %s\t\t %.2f\n", employees[i].empID, employees[i].name, employees[i].department, gross);
    }
    
    return 0;
} 