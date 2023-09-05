#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char student[4];
    char income[10];
    char creditRating[20];
    char buyComputer[4];
    
    
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter income (high/medium/low): ");
    scanf("%s", income);
    printf("Are you a student (yes/no): ");
    scanf("%s", student);
    printf("Enter credit rating (excellent/fair): ");
    scanf("%s", creditRating);

    
    if (age <= 30 && strcmp(income, "high") == 0 && strcmp(student, "no") == 0 && strcmp(creditRating, "fair") == 0) {
        strcpy(buyComputer, "no");
    } else if (age > 40 && strcmp(income, "medium") == 0 && strcmp(student, "no") == 0 && strcmp(creditRating, "fair") == 0) {
        strcpy(buyComputer, "yes");
    } else if (age >= 31 && age <= 40 && strcmp(income, "low") == 0 && strcmp(student, "yes") == 0 && strcmp(creditRating, "excellent") == 0) {
        strcpy(buyComputer, "yes");
    } else if (age > 40 && strcmp(income, "medium") == 0 && strcmp(student, "no") == 0 && strcmp(creditRating, "excellent") == 0) {
        strcpy(buyComputer, "no");
    } else if (age >= 31 && age <= 40 && strcmp(income, "medium") == 0 && strcmp(student, "no") == 0 && strcmp(creditRating, "excellent") == 0) {
        strcpy(buyComputer, "yes");
    } else {
        printf("Invalid input.\n");
        return 1; 
    }

    
    printf("Buy computer: %s\n", buyComputer);

    return 0;
}
