#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void endfunction(void);

int main()
{
    srand(time(NULL));
    int random_num = rand() % upper_limit + lower_limit;

    switch(random_num%2)
    {
    case 0:
        printf("This random number %d is even!", random_num);
        break;
    case 1:
        printf("This random number %d is odd!", random_num);
        break;
    default:
        printf("Something wrong happend!");

    }
    printf("\nEnd of program");

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
        goto end;
        break;
    default:
        printf("\nYou need to type Y or N!");
        goto START;
    }
    end:
        printf("\nEnd in same function!");

        char answer;
   START:
   printf("Do you want to continue? \nType in Y for yes, and N for no.\n");
   scanf(" %c", &answer);

   switch(answer){
    case 'y':
    case 'Y':
        printf("You Y for yes to continue!\n");
        goto START;
        break;
    case 'n':
    case 'N':
        printf("You N for no to continue!\n");
        break;
    default:
        printf("You need to type in Y or N!\n");
   }
    printf("End of program!\n");
*/
