#include <stdio.h>
#include <stdlib.h>
#include "myMath.h"

#define LABEL_PRINT_INT(label, num) printf("%s = %d\n", (label), (num) )

int main(int arg1, char *arg2[])
{
    int r = 5;
    LABEL_PRINT_INT("rabbit", r);
    LABEL_PRINT_INT("tiger", r + 10);

    int num_1 = atoi(arg2[1]), num_2=atoi(arg2[2]);

    printf("\n\nArguments: %d\n",arg1);

    printf("Program: %s\n", arg2[0]);

    printf("Input number is: %d, %d\n", num_1, num_2);
    multiply(num_1, num_2);
    printf("%d / %d = %4.2f\n", num_1, num_2, divide(num_1, num_2));
    return 0;
}
