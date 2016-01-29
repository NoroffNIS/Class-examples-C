#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *inp;
    int sum=0,
        score,
        input_status;
    char bad_char;

    inp = fopen("text.txt", "r");


    for(input_status = fscanf(inp, "%d", &score);
        input_status != EOF;
        input_status = fscanf(inp, "%d", &score)){

        if(input_status == 0){
            input_status = fscanf(inp,"%c", &bad_char);
            printf("\n*** ERROR-BAD NUMBER/CHARACTER %c\n", bad_char);
            break;
        } else {
            sum += score;
            printf("\nNumbers read: %d", score);
        }

    }

    printf("\nSum of the number in file is: %d", sum);

    fclose(inp);


    return 0;
}
/*FILE *inp;
    int sum=0,
        score,
        input_status;
    char bad_char;

        printf("This is the numbers from the files:\n");
        inp = fopen("text.txt","r");

        input_status = fscanf(inp, "%d", &score);

        while(input_status != EOF){


            if(input_status == 0){
                input_status = fscanf(inp, "%c", &bad_char);
                printf("\n***ERROR :Bad input! with %c", bad_char);
                break;
            } else {
                printf("\nNumbers: %d -- %d", score , input_status);
                sum += score;

                input_status = fscanf(inp, "%d", &score);
            }
        }
        printf("SUM: %d", sum);

        fclose(inp);
        */
