#ifndef MYMATH_H_INCLUDED
#define MYMATH_H_INCLUDED

void multiply(int x, int y){
    int sum = x * y;
    printf("%d * %d = %d\n", x, y, sum);
}
double divide(int x, int y){
    double sum = (double) x / y;
    return sum;
}

#endif // MYMATH_H_INCLUDED
