#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char string_var1[20] = "string";
    char string_var2[20] = "Test";
    char string_var3[20] = "copy";

    int len1 = strlen(string_var1);
    int len2 = strlen(string_var2);

    printf("1:%15s | %4d\n", string_var1, len1);
    printf("2:%15s | %4d\n", string_var2, len2);
    printf("-----------------------\n");
    //COPY
    strcpy(string_var1, string_var2);
    strncpy(string_var2, string_var3,2);

    len1 = strlen(string_var1);
    len2 = strlen(string_var2);

    printf("1:%15s | %4d\n", string_var1, len1);
    printf("2:%15s | %4d\n", string_var2, len2);
    printf("-----------------------\n");
    //APPEND
    strcat(string_var1, string_var2);
    strncat(string_var2, string_var3,2);

    len1 = strlen(string_var1);
    len2 = strlen(string_var2);

    printf("1:%15s | %4d\n", string_var1, len1);
    printf("2:%15s | %4d\n", string_var2, len2);
    printf("-----------------------\n");

    //COMPARE
    char str_1[20] = "ab";
    char str_2[20] = "ab";

    int cmp_1 = strcmp(str_1, str_2);

    len1 = strlen(str_1);
    len2 = strlen(str_2);

    printf("1:%15s | %4d\n", str_1, len1);
    printf("2:%15s | %4d\n", str_2, len2);
    printf("cmp: %6s=%6s| %4d\n",str_1, str_2, cmp_1);
    printf("-----------------------\n");

    printf("Type words\n>");
    scanf("%[^\t\n]s", str_1);
    printf("Type words\n>");
    fscanf(stdin," %[^\t\n]s", str_2);

    cmp_1 = strcmp(str_1, str_2);
    len1 = strlen(str_1);
    len2 = strlen(str_2);

    printf("1:%15s | %4d\n", str_1, len1);
    printf("2:%15s | %4d\n", str_2, len2);
    printf("cmp: %6s=%6s| %4d\n",str_1, str_2, cmp_1);
    printf("-----------------------\n");

    return 0;
}

/*
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




char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char string_var1[6] = {"Hello"};
    char string_var2[9] = {"Bye"};
    printf("|%-8s|%5s|\n", string_var1, string_var2);*/
