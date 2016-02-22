#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

typedef struct
{
    char 	  name[SIZE];
    double 	diameter;
    int 	  moons;
    double 	orbit_time,
            rotation_time;
} planet_t;

typedef struct
{
    double		diameter;
    planet_t	planets[9];
    char		  galaxy[SIZE];
} solar_sys_t;


int main()
{

    strcpy(planets.name ,"Jupiter");
	  planets.diameter = 148800.0;
	  planets.moons = 16;
	  planets.orbit_time = 11.9;
    planets.rotation_time = 9.925;

    printf("Planet:\nName:\t\t%s\nDiameter:\t%f\nMoons:\t\t%d\nOrbit time:\t%f\nRotation time:\t%f\n",
    planets.name, planets.diameter, planets.moons, planets.orbit_time, planets.rotation_time);

    return 0;
}

planet_t get_planet(){
  planet_t planet;
  scanf("%s%lf%d%lf%lf\n",planet.name,
                          &planet.diameter,
                          &planet.moons,
                          &planet.orbit_time,
                          &planet.rotation_time);
  return planet;
}


void scan_planet(planet_t *plnp){
  scanf("%s%lf%d%lf%lf\n",(*plnp).name,
                          &(*plnp).diameter,
                          &(*plnp).moons,
                          &(*plnp).orbit_time,
                          &(*plnp).rotation_time);
}
