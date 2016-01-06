#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265359
/*265359*/

int main()
{
    char first_array[4], second_array[4];
    printf("Type some letters:\n");
    scanf("%s", &first_array);

    printf("Type some letters:\n");
    scanf("%s", &second_array);

    printf("This is what you typed: %s\n", first_array);
    printf("This is what you typed: %s\n", second_array);

   return 0;

}


/*
    **int and double test**
    int one = 1;
    double two = 2.2;
    double sum = one * two;
    printf("Equals %f \n", sum);

    **remainder**
    int one = 7;
    int two = 2;
    double sum = one % two;
    printf("Equals %f \n", sum);

    **Char array memory overflow:**
    char input_number1[2], input_number2[2];
    scanf(" %s", &input_number1);
    scanf(" %s", &input_number2);
    printf("Equals %s - %d \n", input_number1, sizeof(input_number1));
    printf("Equals %s - %d ", input_number2, sizeof(input_number2));

    **Triangle calculation of hypotenuse:**
    a^2 = b^2 + c^2 2bc cos(alpha)
    a = sqrt(pow(b,2) + pow(c,2) - 2*b*c * cos(alpha * PI /180.0))

    double a, b, c, alpha;
    b=3;
    c=4;
    alpha = 90;

    a = sqrt(pow(b,2) + pow(c,2) - 2*b*c * cos(alpha * PI /180.0));
    printf("%f",a);



*/
