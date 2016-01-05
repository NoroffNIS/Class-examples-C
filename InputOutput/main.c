#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Declaring the variables that is going to be used */
    int input_number;
    char input_character;
    char input_text[50];

    /*Printing out text to user, and scanning the number typed */
    printf("Type in some number!\n");
    scanf("%d", &input_number);
    printf("You typed in: %d \n", input_number);

    /*Printing out text to user, and scanning the character typed */
    printf("Type in a character!\n");
    scanf(" %c", &input_character);
    printf("You typed in: %c \n", input_character);

    /*Printing out text to user, and scanning the text typed */
    printf("Type in some text!\n");
    scanf("%s", &input_text);
    printf("You typed in: %s \n", input_text);

    return 0;
}
