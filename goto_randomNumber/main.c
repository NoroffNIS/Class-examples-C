#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{
    int upper_limit = 10;
    int lower_limit = 0;
    char answer;
    START:
    srand(time(NULL)); //Uses the time to generate random number
    int random = rand();
    int random_number = (random % (upper_limit - lower_limit) + lower_limit); // Assign a random number with lower and upper limits.

    printf("rand() = %d\n %% %d upper limit\n = %d \n + %d lower limit\n\n", random, upper_limit,random%upper_limit, lower_limit);
    printf("\nYour random number is: %d\n", random_number);
    printf("Type in Y to continue, or N quite>");
    scanf(" %c", &answer);
    switch(answer)
    {
    case 'y':
    case 'Y':
        printf("\nYou typed Y for yes!\n");
        printf("com_num:\t%d\nuser_num:\t%d\nlow:\t%d\nupper:\t%d\n", random_number, 23, lower_limit, upper_limit);
        upper_limit--;
        lower_limit++;
        goto START;
        break;

    case 'n':
    case 'N':
        printf("\nYou typed N for no!\n");
         printf("com_num:\t%d\nuser_num:\t%d\nlow:\t%d\nupper:\t%d\n", random_number, 23, lower_limit, upper_limit);

        break;
    default:
        printf("\nYou need to type Y or N!");
         printf("com_num:\t%d\nuser_num:\t%d\nlow:\t%d\nupper:\t%d\n", random_number, 23, lower_limit, upper_limit);

        goto START;
    }

    return 0;
}
