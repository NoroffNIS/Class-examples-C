#include <stdio.h>
#include <stdlib.h>
#include "myMath.h"

#define LABEL_PRINT(label, num) printf("%s = %f\n", label, num)

int main(int arglen, char *arglist[])
{

    LABEL_PRINT("PI", PI);
    printf("EXIT_S %d\nEXIT_F %d\n\n", EXIT_SUCCESS, EXIT_FAILURE);

    if(arglen < 4 ){
        printf("*** ERROR*** \nTo few arguments!\n");
        exit(EXIT_FAILURE);
    }

    printf("Input numbers: %d, %d\n", atoi(arglist[1]), atoi(arglist[2]));
    int num_1 = atoi(arglist[1]), num_2= atoi(arglist[2]);
    //printf("Type in two numbers\n>");
    //scanf("%d%d", &num_1, &num_2);

    multiply(num_1, num_2);
    double results = divide(num_1, num_2);
    printf("%d / %d = %4.2f\n", num_1, num_2, results);
    printf("%d / %d = %4.2f\n", num_1, num_2, divide(num_1, num_2));

    printf("Circle area is: = %f\n", circle_area(3.2));
    return 0;
}

