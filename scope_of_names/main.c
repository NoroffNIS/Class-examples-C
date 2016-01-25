#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int three = 3;

int one(char a, int x);
int main()
{
    printf("main() MAX: %d\n", MAX);
    printf("main() three: %d\n", three);
    int ret = one('a', 10);
    two();

    return 0;
}
int one(char a, int x){
    three = 5;
    printf("one() MAX: %d\n", MAX);
    printf("one() three: %d\n", three);
    printf("one() a: %d\n", a);
    printf("one() x: %d\n", x);

    return 8;
}
void two(){
    printf("two() MAX: %d\n", MAX);
    printf("two() three: %d\n", three);
    printf("two() one: %d\n", one);
}
