#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // Declare variables
    int age, gender;
    
    // Prompt user for gender
    printf("What is your gender?\n");
    printf("1. Male\n");
    printf("2. Female\n");
    scanf("%d", &gender);

    // Validate gender input
    if (gender != 1 && gender != 2) {
        printf("Invalid gender selection. You do not need to pay tax.\n");
        return 0;
    }

    // Prompt user for age
    do {
        printf("\nHow old are you?\n");
        scanf("%d", &age);
    } while (age <= 0);

    // Determine tax eligibility
    bool taxEligible = (gender == 1 && age > 20) || (gender == 2 && (age >= 18 && age <= 35));

    if (taxEligible) {
        printf("\nYou need to pay tax.\n");
    } else {
        printf("\nYou do not need to pay tax.\n");
    }

    return 0;
}
