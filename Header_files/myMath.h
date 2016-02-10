#ifndef MYMATH_H_INCLUDED
#define MYMATH_H_INCLUDED

#define PI 3.14596

void multiply(int num_1, int num_2){
    int sum = num_1 * num_2;
    printf("%d * %d = %d\n", num_1, num_2, sum);
}
double divide(int num_1, int num_2){
    double sum = (double) num_1 / num_2;
    return sum;
}

double circle_area(double r){
    double area = PI*r*r;
    return area;
}

#endif // MYMATH_H_INCLUDED
