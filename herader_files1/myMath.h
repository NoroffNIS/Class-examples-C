#ifndef MYMATH_H_INCLUDED
#define MYMATH_H_INCLUDED

#define SIZE 10
#define MYNAME "My Name"

#define SIZE 10

typedef struct
{
    char 	  name[10];
    double 	diameter;
    int 	  moons;
    double 	orbit_time,
            rotation_time;
} planet_t;

void scan_planet(planet_t *plnp);

int multiply(int x, int y){
    int sum = x * y;
    return sum;
}
double divide(int x, int y){
    double sum = (double) x / y;
    return sum;
}

#endif // MYMATH_H_INCLUDED
