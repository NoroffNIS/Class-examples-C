#include <stdio.h>
#include <stdlib.h>

int factorial(int start);
int count_letters(char ch, char *string);

int main()
{
    //int start = 5;
    // n! = 5 * 4 * 3 * 2 * 1;
    //printf("Factorial of %d is %d = %d!",start, factorial(start), start);

    char string[] = "Mississippi";
    char ch = 'i';

    int number = count_letters(ch, &string);
    printf("There are %d %c's in %s", number, ch, string);

    return 0;
}
int count = 0;

int count_letters(char ch, char *string){
    int number;
    printf("count: %d | string: %s\n",count, string);
    if(string[0]=='\0'){
        printf("There is no letters in string!\n");
        number = 0;
    } else {
        if(ch == string[0]){
            count +=1;
            printf("count: %d | ch = string[0] - %c = %c\n",count, ch, string[0]);
            number = 1 + count_letters(ch, &string[1]);
        } else {
            count +=1;
            number = count_letters(ch, &string[1]);
        }

     }
     printf("count: %d | ch = string[0] - %c = %c | number:%d \n",count, ch, string[0], number);
     return number;
}


int factorial(int start){
    int ans;
    int temp_ans;
    printf("start: %d | ans: %d\n", start, ans);
    if(start == 1){
        ans = start;
    } else {

        ans = start * factorial(start - 1);

    }
    printf("start: %d | ans: %d\n", start, ans);
    return ans;
}
