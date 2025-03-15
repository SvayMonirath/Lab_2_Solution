// 1. Write a C program to show the result of students based on their grades. A user is required to input his/her grade.
// ▪
// Grade A is “Excellent”, Grade B is “Very good”, Grade C is “Good”, Grade D is “Fair”, Grade F is “Failed”, other grades display “Invalid grade”

#include<stdio.h>
#include<ctype.h>
int main(void) {

    //declare variables
    char score;

    //prompt user for his/her score with condition 
        printf("Enter grade of student(A,B,C,D,F): ");
        scanf(" %c", &score);

        score = toupper(score); //convert to uppercase in case

        // Determine grade using switch-case
    switch (score) {  // Divide by 10 to categorize scores into ranges
        case 'A':
            printf("Grade A: Excellent\n");
            break;
        case 'B':
            printf("Grade B: Very good\n");
            break;
        case 'C':
            printf("Grade C: Good\n");
            break;
        case 'D':
            printf("Grade D: Fair\n");
            break;
        case 'F':
            printf("Grade F: Failed\n");
            break;
        default:
            printf("Invalid Grade\n");
            break;
    }


    return 0;
}