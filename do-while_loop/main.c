#include <stdio.h>
#include <stdlib.h>

void for_loop(void);

int main()
{
    char answer;

    do{

        for_loop();

        printf("\nDo you want to continue>");
        scanf(" %c", &answer);
    }while(answer == 'y' || answer == 'Y');

    return 0;
}

void for_loop(void){
    int i, j, k, m;
    for(i=0; i<6; i++){
        for(m=6-i; m>0; m--){
            printf(" ");
        }

        for(j=0; j<i; j++){
            printf("%d", j);
        }
        for(k=j; k>=0; k--){
            printf("%d", k);
        }
        printf("\n");
    }

}

/*int number;
    printf("Hello world!\n");
    do{
        printf("Type in a number:>");
        scanf("%d", &number);

    }while(number != 0 );
*/
