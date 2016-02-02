#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void do_it(int arg1, int *arg2, int *arg3);
void array_change(int *array_cp, int size);
void sort_array_de(int *array, int size);

int main()
{

    int i, size=10, array[size];
    srand(time(NULL));

    for(i=0;i<size;i++){
        array[i]=rand()%100;
    }
    printf("Befor\n");
    for(i=0;i<size;i++){
       printf("[%d]:%d\n",i,array[i]);
    }

    int target = 5;
    int results = search_array(&array, size, target);
    printf("Result of the search:\n There is a %d, in array cell %d.",
            target, results);

    printf("After\n");
    for(i=0;i<size;i++){
       printf("[%d]:%d\n",i,array[i]);
    }

    return 0;
}

void sort_array_de(int *array, int size){
    int i, j, temp;

        for(i=0;i<size;i++){
            for(j=i+1;j<size;j++){
                if(array[i]> array[j]){
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
}

int search_array(const int *array, int size, int target){
    int i=0, flag=0;

    while(!flag && i<size){
        if(array[i] == target){
            flag = 1;
            return i;
        }else if(i>=size-1){
            return -1;
        }
        i++;
    }

    /*int i;
    for(i=0;i<size; i++){
        if(array[i] == target){
            return i;
        } else if (i>=size-1){
            return -1;
        }
    }*/
}
/*int target = 5;
    int results = search_array(&array, size, target);
    printf("Result of the search:\n There is a %d, in array cell %d.",
            target, results);*/


void array_change(int array_cp[], int size){
    int i;
    for(i=0;i<size;i++){
        array_cp[i] = -1;
    }
}

void doitexample(){
int i, size=10, array[size];
    srand(time(NULL));

    for(i=0;i<size;i++){
        array[i]=rand()%100;
    }

    printf("Befor do_it()\n");

    for(i=0;i<size;i++){
       printf("[%d]:%d\n",i,array[i]);
    }

    do_it(array[0], &array[1], &array[2]);

    printf("After do_it()\n");

    for(i=0;i<size;i++){
       printf("[%d]:%d\n",i,array[i]);
    }
}
void do_it(int arg1, int *arg2, int *arg3){
    arg1 = -1;
    *arg2 = -1;
    *arg3 = -1;
}


/*

void do_it(const int list_1[], const int list_2[], int *list_sum, int size);
int get_max(const int *list, int n);
int main()
{

    int i, MAX_SIZE=10;
    int x[MAX_SIZE];
    srand(time(NULL));


    for(i=0; i<MAX_SIZE; i++)
    {
        x[i] = rand()%100;
    }

    for(i=0; i<MAX_SIZE; i++)
    {
        printf("%d\n", x[i] );
    }
    sort_array(&x, MAX_SIZE);
    printf("The numbers arranged in descending order are given below\n");
    for(i=0; i<MAX_SIZE; i++)
    {
        printf("%d\n", x[i] );
    }
    printf("Largest value %d.\n", get_max(x,MAX_SIZE));

    int size = 10,
        list_1[size],
        list_2[size],
        list_sum[size];

    for(i=0; i<MAX_SIZsort_array_de(&array, size)E; i++)
    {
        list_1[i] = i;
        list_2[i] = i;
    }
    do_it(list_1,list_2, &list_sum,size);
    for(i=0; i<size; i++)
    {
        printf("%d\n", list_sum[i] );
    }
    printf("2D Array:\n");
    print_2D();
    return 0;
}

int get_max(const int *list, int n)
{
    int i, largest;
    largest = list[0];

    for(i=1; i<n; i++)
    {
        if(list[i] > largest)
        {
            largest = list[i];
        }
    }
    return largest;
}


void do_it(const int list_1[], const int list_2[],
           int *list_sum, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        list_sum[i] = list_1[i] + list_2[i];
    }
}

void sort_array(int *list, int n){

    int i, j, temp;
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

void print_2D(){
  int array[4][4] = {
                        {00,01,02,03},
                        {10,11,12,13},
                        {20,21,22,23},
                        {30,31,32,33}};

  printf("%d",array[1][1]);

}



/*
int x[4][3], i, j;
        for(i=0;i<=3;i++){
            for(j=0; j<=4; j++){
                    x[i][j] = j;
                printf("%d", x[i][j]);
            }
            printf("\n");
        }
*/
