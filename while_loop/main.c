#include <stdio.h>
#include <stdlib.h>

#define DEBUG 1

int main()
{

    char answer = 'y';
    while(answer == 'y'){
    printf("Type y to loop!>");
      scanf(" %c", &answer);
      if(DEBUG)
        printf("****DEBUG: This is scanned: %c\n", answer);
    }
    printf("\nExit loop!");

    return 0;
}
/*
nt count = 0;

    while(count <= 50){

    printf("count: %d -- count2: %1.f\n",count, pow(2,count));
    count = count + 1;


int count = 1;
    int input_number;
    printf("Type in a number !>");
    scanf("%d", &input_number);

    while(count < input_number){
    count = count * 2 ;
    printf("%d\n",count);
    }
    count = 1;
    while(count < input_number){

    printf("%d\n",count);
    count = count * 2 ;
    }

    */
