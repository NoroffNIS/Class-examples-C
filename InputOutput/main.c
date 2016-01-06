#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Declaring the variables that is going to be used. */
    char first_name[20],last_name[20], street_name[20], state[20], email[20];
    int phone_nr, street_number, zip_code;


    /*Printing out text to user, and scanning the number typed. */
    printf("Type your first name:\n");
    scanf(" %s", &first_name);

    printf("Type your last name:\n");
    scanf(" %s", &last_name);

    printf("Type your street name:\n");
    scanf(" %s", &street_name);

    printf("Type your street number:\n");
    scanf(" %d", &street_number);

    /*Printing out information typed in to user. */
    printf("Your information is: \n");
    printf("Name: %s %s \n", first_name, last_name);
    printf("Address: %s %d \n", street_name, street_number);

    return 0;
}
/*
    int input_number;
    char input_character;
    char input_text[50];

    *Printing out text to user, and scanning the number typed *
    printf("Type in some number!\n");
    scanf("%d", &input_number);
    printf("You typed in: %d \n", input_number);

    *Printing out text to user, and scanning the character typed *
    printf("Type in a character!\n");
    scanf(" %c", &input_character);
    printf("You typed in: %c \n", input_character);

    *Printing out text to user, and scanning the text typed *
    printf("Type in some text!\n");
    scanf("%s", &input_text);
    printf("You typed in: %s \n", input_text);

*/
