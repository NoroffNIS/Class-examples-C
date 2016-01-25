#include <stdio.h>
#include <stdlib.h>

#define SENTINEL -99

int main()
{

    int sum=0, score;
    printf("Type in a score, or %d to quit>", SENTINEL);
    for(scanf("%d", &score); score!=SENTINEL; scanf("%d", &score)){
        sum += score;
        printf("Type in a score, or %d to quit>", SENTINEL);
    }
    printf("You sum of score is %d", sum);

    return 0;
}
