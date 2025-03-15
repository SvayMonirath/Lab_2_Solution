// 4. Write a program to check whether an input character is a vowel or a
// consonant (must use SWITCH)

#include<stdio.h>
#include<ctype.h>

int main(void) {
    //declare variables
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);

    input = tolower(input); //convert to lower letter 

    switch (input)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u': 
        printf("This is a vowel\n");
        break;
    
    default:
        //check if input is a letter 
        if(input>= 'a' && input<='z') {
            printf("This is a consonant\n");
        } else {
            printf("This is not a letter\n");
        }
        break;
    }

    return 0;
}