#include <stdio.h>
#include <stdlib.h>

#define converter 3.6

void meterSec_kmHour(double);
void kmHour_meterSec(double);

int main()
{
    double value;
    char buffer[50];

    printf("Print in a value to be converted>");
    fgets(buffer, sizeof(buffer), stdin);
    value = atof(buffer);

    meterSec_kmHour(value);
    kmHour_meterSec(value);

    return 0;
}
void meterSec_kmHour(double value){
    double kmHour = value * converter;
    printf("\n%f m/s is %f km/h", value, kmHour);
}
void kmHour_meterSec(double value){
    double meterSec = value / converter;
    printf("\n%f km/h is %f m/s", value, meterSec);
}
