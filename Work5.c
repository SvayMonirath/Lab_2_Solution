// 5. Write a C program to allow a user to input 2 numbers and an operation (+, -, *,
// /) then using SWITCH to perform the given operation between those two
// numbers.

#include<stdio.h>
int main(void) {
    //declare variables 
    char operator;
    float num1, num2, result;

    //prompt user for num and operator
    printf("Enter a number: ");
    scanf("%f", &num1);

    printf("\nEnter an operator(+,-,*,/): ");
    scanf(" %c", &operator);

    printf("\nEnter a number: ");
    scanf("%f", &num2);

    //switch operation 
    switch (operator)
    {
    case '+':
        result = num1+num2;
        printf("%.2lf\n", result); break; 
    case '-':
        result = num1-num2;
        printf("%.2lf\n", result); break;
    case '*':
        result = num1*num2;
        printf("%.2lf\n", result); break;
    case '/':
        if(num2 != 0) {
            result = num1/num2;
            printf("%.2lf\n", result); break;
        } else {
            printf("Error!!\n"); break;
        }
    default:
        printf("Invalid operator!!\n"); break;
    }

    return 0;
}