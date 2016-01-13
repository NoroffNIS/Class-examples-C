#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define upper_limit 100
#define lower_limit 0


int main()
{
    char answer;
    START:
    srand(time(NULL));
    int random_number = (rand() % upper_limit + lower_limit);
    printf("\nYour random number is: %d\n", random_number);
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
