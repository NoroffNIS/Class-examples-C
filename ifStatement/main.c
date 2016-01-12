#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
     * Example using relation operators to compare integers.
     */
    int a=1, b=2, c=3, d=4;
    if(a<b)
    {
        printf("a value(1) is less then b value(2)"); //This code is executed when the expression a<b is true.
    }

    if(a>b)  //This expression is false.
    {
        printf("a value(1) is grater then b value(2)"); //This code is executed when the expression a>b is true.
    }
    else if(c<d)
    {
        printf("c value(3) is less then d value(4)"); //This code is executed when the expression c<b is true.
    }
    else
    {
        printf("None of the above expressions are true");
    }

    /*
    * Example using nested if statement.
    */
    int check_value = 2;
    if(check_value < d)
    {
        if(check_value < c)
        {
            if(check_value < b)
            {
                printf("Check_value(2) is less the d, c and b!");
            }
            printf("Check_value(2) is less the d and c!");
        }
    }

    /*
     * Example using logical operators in if statement expression.
     */

    int check_value = 2;
    if(check_value < d && check_value < c && check_value < b)
    {
        printf("Check_value(2) is less the d, c and b!");
    }
    else if(check_value < d && check_value < c)
    {
        printf("Check_value(2) is less the d and c!");
    }
}

/*
 * Example using characters in if statement expression.
 */
char buffer[50];
char answer;

printf("Type Y= yes, and N= No>");
fgets(buffer, sizeof(buffer), stdin);
answer = buffer[0];

printf("\nAnswer: %d == 'Y':%d", answer, 'Y');
printf("\nBuffer[0]: %c | Buffer[1]: %c | Buffer[2]: %c", buffer[0], buffer[1], buffer[2]);

if(answer == 'Y' || answer == 'y')
{
    printf("\nYou typed Y for yes");
}
else if(answer == 'N')
{
    printf("\nYou typed N for no");
}
else
{
    printf("\nYou typed wrong!");
}
printf("\nEnd");

return 0;
}
