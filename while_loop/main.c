#include <stdio.h>
#include <stdlib.h>

int main()
{

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

    return 0;
}
/*

    */
