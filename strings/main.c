#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string_var1[] = "Hello Hello Hello";
    char string_var2[20] = "Test string";

    printf("1: %s\n", string_var1);
    char *var_test = strncat(string_var1,string_var2, 3);
    printf("return cat: %s\n", var_test);

    strncpy(string_var2, "Bye Bye", 3);

    printf("2: %s\n", string_var1);
    printf("2: %s\n", string_var2);

    int results = strcmp("He","Hei");
    printf("Results: %d\n", results);

    results = strncmp("He","Hei", 2);
    printf("Results: %d\n", results);

    char string_var4[] = "Hello Hello Hello";
    int len = strlen(string_var4);
    printf("Length: %d\n", len);

    char month[12][10] = {"January", "February", "March", "April", "May",
                          "June", "July", "August", "September", "October",
                          "November", "December"
                         };
    int i, j;
    for(i=0; i<12; i++)
    {
        printf("|%-3s|", "\n");
        for(j=0; j<10;j++)
        {
            printf("%c", month[i][j]);
        }
    }


    return 0;
}

/*char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char string_var1[6] = {"Hello"};
    char string_var2[9] = {"Bye"};
    printf("|%-8s|%5s|\n", string_var1, string_var2);*/
