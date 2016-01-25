#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *inp;
    int sum=0,
        score,
        input_status;
    char bad_char;

        printf("This is the numbers from the files:\n");
        inp = fopen("text.txt","r");

        input_status = fscanf(inp, "%d", &score);

        while(input_status != EOF){
            printf("\nNumbers: %d -- %d", score , input_status);
            sum += score;

            input_status = fscanf(inp, "%d", &score);

            if(input_status == 0){
                input_status = fscanf(inp, "%c", &bad_char);
                printf("\n***ERROR :Bad input! with %c", bad_char);
                break;
            }
        }
        printf("SUM: %d", sum);

        fclose(inp);

    return 0;
}
