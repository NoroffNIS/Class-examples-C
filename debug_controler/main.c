#include <stdio.h>
#include <stdlib.h>

#define DEBUG1 1
#define DEBUG2 0

int main()
{
    int i;

    for(i=0; i<10; i++){
        printf("Hello world!\n");
        if(DEBUG)
            printf("### DEBUG ### i = %d\n",i);
    }

    return 0;
}
