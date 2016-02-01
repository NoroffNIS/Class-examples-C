#include <stdio.h>
#include <stdlib.h>

int main()
{
   int array[]={1,2,3,4,5,6,7,8,9,10};
    printf("Size: %d/%d= %d",sizeof(array),sizeof(array[0]),sizeof(array)/sizeof(array[0]));

    printf("\narray: %d ,%d", array[0], array[3]);
    printf("\narray: %d + %d = %d",array[0], array[3], array[0] + array[3]);

    int i = 7;
    int size = sizeof(array)/sizeof(array[0]);
    printf("\narray: %d ,%d", array[i], array[i]);

    for(i=0; i<size; i+=2){
        printf("\narray cell i= %d = %d", i, array[i]);

    }

    int max_size = 5;
    int array_1[max_size];
    printf("Type in %d numbers:\n", max_size);
    for(i=0; i<max_size; i++){
        scanf("%d", &array_1[i]);
    }
    printf("\n Scanning done!\n Printing out results:\n");
    for(i=0; i<max_size; i++){
        printf("\n%d", array_1[i]);
    }


    return 0;
}
