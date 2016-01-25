#include <stdio.h>
#include <stdlib.h>

int main()
{

    char letter1='v', letter2='r', letter3='e';

    printf("This letter are going to be sorted in ascending order:\n %c, %c , %c"
                , letter1, letter2, letter3);

    order(&letter1, &letter2);
    printf("\nThis letter are now sorted in ascending order:\n %c, %c , %c"
                , letter1, letter2, letter3);

    order(&letter1, &letter3);
    printf("\nThis letter are now sorted in ascending order:\n %c, %c , %c"
                , letter1, letter2, letter3);

    order(&letter2, &letter3);
    printf("\nThis letter are now sorted in ascending order:\n %c, %c , %c"
                , letter1, letter2, letter3);
    return 0;
}

void order(char *letter10, char *letter20){
    char temp;
    if(*letter10 > *letter20){
        temp = *letter10;
        *letter10 = *letter20;
        *letter20 = temp;
    }
}
