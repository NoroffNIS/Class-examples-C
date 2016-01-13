#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char answer;

    START:
    printf("Type in Y to continue, or N quite>");
    scanf(" %c", &answer);

    switch(answer)
    {
    case 'y':
    case 'Y':
        printf("\nYou typed Y for yes!\n");
        goto START;
        break;
    case 'n':
    case 'N':
        printf("\nYou typed N for no!\n");
        break;
    default:
        printf("\nYou need to type Y or N!");
        goto START;
    }

    return 0;
}

/*
    srand(time(NULL));
    int rand_num = rand() % 100 + 0;

    switch(rand_num%2)
    {
    case 0:
        printf("The number %d is even.\n", rand_num);
        break;
    case 1:
        printf("The Number %d is odd.\n", rand_num);
        break;
    default:
        printf("There was some error in your switch statement.");
    }
    printf("switch ended!");
*/
