#include <stdio.h>
#include <string.h>

struct Patient {
    char patientID[20];
    char patientName[50];
    int age;
    char gender[10];
    char diagnosis[50];
    int daysAdmitted;
};

int main() {
    struct Patient p;
    
    
    printf("Enter Patient ID: ");
    scanf("%s", p.patientID);
    printf("Enter Patient Name: ");
    scanf("%s", p.patientName);
    printf("Enter Age: ");
    scanf("%d", &p.age);
    printf("Enter Gender: ");
    scanf("%s", p.gender);
    printf("Enter Diagnosis: ");
    scanf("%s", p.diagnosis);
    printf("Enter Days Admitted: ");
    scanf("%d", &p.daysAdmitted);
    
    
    printf("\n\tPATIENT ADMISSION REPORT\n");
    printf("\t--------------------------\n");
    printf("\tPatient ID    : %s\n", p.patientID);
    printf("\tPatient Name  : %s\n", p.patientName);
    printf("\tAge           : %d\n", p.age);
    printf("\tGender        : %s\n", p.gender);
    printf("\tDiagnosis     : %s\n", p.diagnosis);
    printf("\tDays Admitted : %d\n", p.daysAdmitted);
    
    return 0;
    }