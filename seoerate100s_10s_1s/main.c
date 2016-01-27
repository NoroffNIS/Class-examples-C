#include <stdio.h>
#include <stdlib.h>

void separate(int num,int *ones, int *tens, int *hundreds);
int main(){
	int num, ones, tens, hundreds;

	printf("Type a number>");
	scanf("%d", &num);
    separate(num, &ones, &tens, &hundreds);
    printf("The number is separated in \nhundreds: %d, \ntens: %d, \nones: %d", hundreds, tens, ones);

    return 0;
}

void separate(int num,int *ones, int *tens, int *hundreds){
		*hundreds = num - (num % 100);
		*tens = num - (num % 10 ) - *hundreds;
		*ones = num - (num % 1) - *tens - *hundreds;
}
