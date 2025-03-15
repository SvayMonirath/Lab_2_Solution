// 1. Write a C program to show the result of students based on their grades. A user is required to input his/her grade.
// ▪
// Grade A is “Excellent”, Grade B is “Very good”, Grade C is “Good”, Grade D is “Fair”, Grade F is “Failed”, other grades display “Invalid grade”

#include<stdio.h>
int main(void) {

    //declare variables
    int score;

    //prompt user for his/her score with condition 
    do {
        printf("Enter score of student: ");
        scanf("%d", &score);

        if(score < 0 || score >100) {
            printf("Invalid grade\n");
        }
    }   while(score < 0 || score >100);
    
        // Determine grade using switch-case
    switch (score / 10) {  // Divide by 10 to categorize scores into ranges
        case 10:  // If score is 100
        case 9:
            printf("Grade A: Excellent\n");
            break;
        case 8:
            printf("Grade B: Very good\n");
            break;
        case 7:
            printf("Grade C: Good\n");
            break;
        case 6:
            printf("Grade D: Fair\n");
            break;
        default:
            printf("Grade F: Failed\n");
            break;
    }


    return 0;
}