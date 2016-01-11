#include <stdio.h>
#include <stdlib.h>

void draw_roof(void);
void draw_floor(void);
void draw_basement(void);


int main()
{
    draw_roof();
    draw_floor();
    draw_basement();
  return 0;
}

void draw_roof(){
    printf("   # \n");
    printf(" /  \\ \n");
    printf("/    \\ \n");
}
void draw_floor(){
    printf("*******\n");
    printf("*     *\n");
    printf("*     *\n");
    printf("*     *\n");
    printf("*******\n");
}
void draw_basement(){
  printf("* * * *\n");
  printf("* * * *\n");
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

** Using functions with input**
#include <stdio.h>
#include <stdlib.h>

double multiply(double a, double b);
double divide(double a, double b);

int main()
{
    char buffer[50];
    double num_1, num_2;

    printf("Type numbers>\n");
    fgets(buffer, sizeof(buffer), stdin);
    num_1 = atof(buffer);

    fgets(buffer, sizeof(buffer), stdin);
    num_2 = atof(buffer);

    double results = multiply(num_1, num_2);
    printf("Result is: %f", results);

  return 0;
}

double multiply(double x, double y){
    double result=x*y;
    return result;
}

double divide(double x, double y){
    double result=x/y;
    return result;
}

*/
