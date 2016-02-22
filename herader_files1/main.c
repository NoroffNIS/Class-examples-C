#include <stdio.h>
#include <stdlib.h>
#include "myMath.h"

int main(int arg1, int arg2)
{
    int num_1 = arg1, num_2=arg2;
    printf("Input number is: %d, %d\n", num_1, num_2);
    multiply(num_1, num_2);
    printf("%d / %d = %4.2f\n", num_1, num_2, divide(num_1, num_2));


    printf("\n\n\n%d - %d\n", EXIT_FAILURE, EXIT_SUCCESS);
    planet_t planet;
    strcpy(planet.name ,"Jupiter");
	  planet.diameter = 148800.0;
	  planet.moons = 16;
	  planet.orbit_time = 11.9;
    planet.rotation_time = 9.925;

    printf("Planet:\nName:\t\t%s\nDiameter:\t%f\nMoons:\t\t%d\nOrbit time:\t%f\nRotation time:\t%f\n",planet.name, planet.diameter, planet.moons, planet.orbit_time, planet.rotation_time);


    printf("Size: %d\n", SIZE);
    printf("Name: %s\n", MYNAME);
    return 0;
}
