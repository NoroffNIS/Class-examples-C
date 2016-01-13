#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define upper_limit 100
#define lower_limit 0


int main()
{
    char answer;
    START:
    srand(time(NULL)); //Uses the time to generate random number
    int random = rand();
    int random_number = (random % upper_limit + lower_limit); // Assign a random number with lower and upper limits.

    printf("rand() = %d\n %% %d upper limit\n = %d \n + %d lower limit\n\n", random, upper_limit,random%upper_limit, lower_limit);
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
