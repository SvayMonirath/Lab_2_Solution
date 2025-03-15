// 3. A photocopy store charges $0.05 per paper when a total photocopy less than
// or equal 30 papers, $0.025 per paper when a total photocopy more than 30 but
// less than 100, $0.01 per paper when a total photocopy more than or equal 100.
// Write a C program that asks the user for the number of photocopies and displays
// the total price.

#include <stdio.h>

int main(void) {
    int paper;
    float cost;  // Use float for accurate price calculation

    // Prompt user for input, ensuring non-negative input
    do {
        printf("How many photocopies do you want: ");
        scanf("%d", &paper);
    } while (paper < 0);

    // Calculate cost based on quantity
    if (paper <= 30) {
        cost = paper * 0.05;
    } else if (paper < 100) {
        cost = paper * 0.025;
    } else {
        cost = paper * 0.01;
    }

    // Display result with 2 decimal places
    printf("Total cost is %.2f$\n", cost);

    return 0;
}
