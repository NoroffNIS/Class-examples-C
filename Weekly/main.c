#include <stdio.h>
#include <math.h>

int main(){

    double a=2, b=4, c=-4, root_1, root_2;

    root_1 = -b + sqrt((pow(b,2))-4*a*c) / (2*a);
    root_2 = -b - sqrt((pow(b,2))-4*a*c) / (2*a);

    printf("Root 1: %f", root_1);
    printf("Root 2: %f", root_2);

    return 0;
}
