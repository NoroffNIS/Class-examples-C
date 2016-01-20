#include <stdio.h>
#include <stdlib.h>



int main()
{
    int workers, hours,sum_pay_bill, i;
    int houer_salary;

    printf("How many workers do you have? > ");
    scanf("%d", &workers);

    for(i=0; i<workers; i++ )
    {
        printf("\nType in the hours for worker %d >", i);
        scanf("%d", &hours);
        printf("\nWhat is the hour salary for worker %d >", i);
        scanf("%d", &houer_salary);
        sum_pay_bill = sum_pay_bill +(houer_salary*hours);
    }
    printf("\nYou have to pay %d in total\n", sum_pay_bill);

    return 0;
}
/*
#define CBEGIN 10
#define CLIMIT -5
#define CSTEP -5
 int celcius;
    double fahrenheit;

    for(celcius = CBEGIN; celcius >= CLIMIT; celcius += CSTEP){
        fahrenheit = 1.8 * celcius + 32;
        printf("Celcius: %-2d - Fahrenheit: %-5.1f\n",celcius, fahrenheit);
    }*/
