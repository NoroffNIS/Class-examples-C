#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, SIZE = 5, array[SIZE], sum=0;
    printf("Type in %d numbers:\n", SIZE);
    for(i=0; i<SIZE;i++){
        scanf("%d", &array[i]);
    }

     for(i=0; i<SIZE;i++){
        sum += array[i];
    }

    for(i=0; i<SIZE;i++){
        printf("Array[%d]: %d | factorial:%d! = %d\n"
               , i, array[i],array[i],factorial(array[i]));
    }
    printf("Sum of array elements: %d", sum);

    return 0;
}

int factorial(int start){
    int ans;
    int temp_ans;
    //printf("start: %d | ans: %d\n", start, ans);
    if(start == 1){
        ans = start;
    } else {
        ans = start * factorial(start - 1);
    }
    //printf("start: %d | ans: %d\n", start, ans);
    return ans;
}

void dice_game()
{
    int i, players = 3;
    srand(time(NULL));

    for(i=1; i<=players; i++)
    {
        printf("Player %d turn!\n", i);

        int j , rolls = 3;
        for(j=1; j<=rolls; j++)
        {
            rolle();
            printf("Player %d has %d throws left!\n", i, rolls-j);
        }
    }

}

void rolle(void)
{
    int i;
    for(i=1; i<=6; i++)
    {
        int rand_eye = rand()%6+1;
        switch(rand_eye)
        {
        case 1:
            one();
            break;
        case 2:
            printf("+-----+\n");
            printf("|o    |\n");
            printf("|     |\n");
            printf("|    o|\n");
            printf("+-----+\n");
            break;
        case 3:
            printf("Dice %d: %d\n", i, rand_eye);
            break;
        case 4:
            printf("Dice %d: %d\n", i, rand_eye);
            break;
        case 5:
            printf("Dice %d: %d\n", i, rand_eye);
            break;
        case 6:
            printf("Dice %d: %d\n", i, rand_eye);
            break;
        }

    }
}
void one()
{
    printf("+---+\n");
    printf("| o |\n");
    printf("+---+\n");
}
