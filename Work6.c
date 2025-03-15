// 6. Write a C program to tell the grade of a score given by a user. The grading
// method is defined as follows:
// ▪ When the score is greater than or equal 50, display “You got grade E.
// ”
// ▪ When the score is greater than or equal 60, display “You got grade D.
// ”
// ▪ When the score is greater than or equal 70, display “You got grade C.
// ”
// ▪ When the score is greater than or equal 80, display “You got grade B.
// ”
// ▪ When the score is greater than or equal 90, display “You got grade A.
// ”
// ▪ Otherwise, display “You got grade F, and you don’t pass.
// ”

#include<stdio.h> 
int main(void) {
    //declare variable 
    int score;

    //prompt user for his/her score with condition 
    do {
        printf("Enter student score: ");
        scanf("%d", &score);
    } while(score<0 || score >100);

    switch (score/10)
    {
    case 10: case 9:
        printf("You got grade A.\n"); break;
    case 8: 
        printf("You got grade B.\n"); break;
    case 7:
        printf("You got grade C.\n"); break;
    case 6: 
        printf("You got grade D.\n"); break;
    case 5:
        printf("You got grade E.\n"); break;
    default:
        printf("You got grade F:(\n"); break;
    }
    return 0;
}