#include <stdio.h>
#include <stdlib.h>

void draw_roof(void);
void draw_floor(void);
void draw_basement(void);

int main()
{
    printf("My House\n");
    //Roof
    printf("   # \n");
    printf("  / \\ \n");
    printf(" /   \\ \n");
    printf("/     \\ \n");
    //Floor
    printf("******* \n");
    printf("*|| ||* \n");
    printf("*     * \n");
    printf("* | | * \n");
    //Basement
    printf("******* \n");
    printf("* * * * \n");
    printf("******* \n");

  return 0;
}

void draw_floor(){

}
void draw_basement(){

    }

/*


#include <stdio.h>
#include <stdlib.h>

int multiply(int a, int b);

int main()
{
    char buffer[50];
    int number_1, number_2;

   printf("Type in a number: \n");
   fgets(buffer, 50, stdin);
   number_1 = atoi(buffer);

   printf("Type in another number: \n");
   fgets(buffer, 50, stdin);
   number_2 = atoi(buffer);

    int sum = multiply(number_1, number_2);

    printf("Result: %d", sum);

    return 0;
}

int multiply(int x, int y){
    int sum = x*y;
    return sum;
}

/*

#include <stdio.h>
#include <stdlib.h>

void draw_baseLine(void);
void draw_intersection(void);


int main()
{
    draw_intersection();
    draw_baseLine();


  return 0;
}

void draw_intersection(){
    printf("  /\\ \n");
    printf(" /  \\ \n");
    printf("/    \\ \n");
}
void draw_baseLine(){
    printf("------ \n");
}
*/
