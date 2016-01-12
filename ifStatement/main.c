#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[50];
    char answer;

    printf("Type Y= yes, and N= No>");
    fgets(buffer, sizeof(buffer), stdin);
    answer = buffer[0];

    printf("\nAnswer: %d == 'Y':%d", answer, 'Y');
    printf("\nBuffer[0]: %c | Buffer[1]: %c | Buffer[2]: %c", buffer[0], buffer[1], buffer[2]);

    if(answer == 'Y' || answer == 'y'){
        printf("\nYou typed Y for yes");
    }else if(answer == 'N'){
        printf("\nYou typed N for no");
    }else{
        printf("\nYou typed wrong!");
    }
    printf("\nEnd");

    return 0;
}
