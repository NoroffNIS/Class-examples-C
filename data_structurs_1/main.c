#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *nextPtr;
};

typedef struct
{
    char 	  name[9];
    double 	diameter;
    int 	  moons;
    double 	orbit_time,
            rotation_time;
} planet_t;

int main()
{

  int 			*num_ptr;
  char 		  *let_ptr;
  planet_t 	*planet_ptr;

  num_ptr = (int *)malloc(sizeof( int ) );
  let_ptr = (char*)malloc(sizeof( char) );
  planet_ptr = (planet_t *)malloc(sizeof( planet_t) );

  planet_t blank_planet = {"",0,0,0,0};

  *num_ptr = 203;
  *let_ptr = 'Q';
  *planet_ptr = blank_planet;

printf("%d | %c | P: %s, %f, %d, %f, %f", num_ptr, let_ptr,
 planet_ptr->name,planet_ptr->diameter,
  planet_ptr->moons, planet_ptr->orbit_time,
   planet_ptr->rotation_time);

   free(num_ptr);
   free(let_ptr);
   free(planet_ptr);

    return 0;
}
